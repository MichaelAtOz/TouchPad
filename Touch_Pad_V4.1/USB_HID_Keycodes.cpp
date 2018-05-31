/*
  This code is a minor derivative of the Arduino library Keyboard.cpp

  Copyright (c) 2015, Arduino LLC
  Original code (pre-library): Copyright (c) 2011, Peter Barrett

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

 *******************************************************************************

  WARNING:  Changing the code in this file could prevent your TouchPad from working!

 *******************************************************************************/
#include "KeyboardUK.h"
#include "USB_HID_Keycodes.h"
// These U functions, pressU & releaseU operate on raw USB HID codes,
// NOT the KEY_ prefixed ASCII like codes used by the Keyboard/cpp functions.
// The raw USB codes are defined in USB_HID_Keycodes.h,
// They have KC_ & KP_ prefixes for keyboard & keypad codes, 
// eg KC_K, KC_F14, KC_LEFTSHIFT, KC_ENTER, KP_1, KP_PLUS
// These U functions are interoperable with the other functions, and
// you should use releaseAll() to finalise a key sequence.

// pressU() adds the specified key 
// to the persistent key report and sends the report.  Because of the way 
// USB HID works, the host acts like the key remains pressed until we 
// call releaseU(), releaseAll(), or otherwise clear the report and resend.
size_t Keyboard_::pressU(uint8_t k) 
{
	uint8_t i;
	if (k >= 0xE0 && k <= 0xE7) {	// it's a modifier key
		_keyReport.modifiers |= (1<<(k-0xE0));
		k = 0;
	} 
	
	// Add k to the key report only if it's not already present
	// and if there is an empty slot.
	if (_keyReport.keys[0] != k && _keyReport.keys[1] != k && 
		_keyReport.keys[2] != k && _keyReport.keys[3] != k &&
		_keyReport.keys[4] != k && _keyReport.keys[5] != k) {
		
		for (i=0; i<6; i++) {
			if (_keyReport.keys[i] == 0x00) {
				_keyReport.keys[i] = k;
				break;
			}
		}
		if (i == 6) {
			setWriteError();
			return 0;
		}	
	}
	sendReport(&_keyReport);
	return 1;
}

// releaseU() takes the specified key out of the persistent key report and
// sends the report.  This tells the OS the key is no longer pressed and that
// it shouldn't be repeated any more.
size_t Keyboard_::releaseU(uint8_t k) 
{
	uint8_t i;
	if (k >= 0xE0 && k <=0xE7) {	// it's a modifier key
		_keyReport.modifiers &= ~(1<<(k-0xE0));
		k = 0;
	}
	
	// Test the key report to see if k is present.  Clear it if it exists.
	// Check all positions in case the key is present more than once (which it shouldn't be)
	for (i=0; i<6; i++) {
		if (0 != k && _keyReport.keys[i] == k) {
			_keyReport.keys[i] = 0x00;
		}
	}
	sendReport(&_keyReport);
	return 1;
}
