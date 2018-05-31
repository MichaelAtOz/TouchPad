// USB_HID_Keycodes.h
//
// Unlike the Arduino Keyboard library, which use KEY_<name> and is sort of ASCII based,
// uses special codes > decimal 127, and translates some codes to the final USB codes,
// these definitions are the actual codes used in the USB HID keyboard/Keypad Page (0x07)
// USB HID Keycodes are derived from:
// http://www.usb.org/developers/hidpage/Hut1_12v2.pdf (starting at page 53) & elsewhere.
// This list is verbose, but in comments the '& KC_...' are reminders of shortened derivatives defined further below, 
// KC_ defines a keyboard Key, KP_ defines a keypad Key (including, but more than just, the numeric keypad)
//
#define		KC_NOOP 			0x00	// Decimal 0 & KC_NO
#define		KC_ERRORROLLOVER	0x01	// Decimal 1 & KC_ERO
#define		KC_ERRORPOSTFAIL	0x02	// Decimal 2 & KC_EPF
#define		KC_UNDEFINED		0x03	// Decimal 3 & KC_UND
#define		KC_A			0x04		// Decimal 4
#define		KC_B			0x05		// Decimal 5
#define		KC_C			0x06		// Decimal 6
#define		KC_D			0x07		// Decimal 7
#define		KC_E			0x08		// Decimal 8
#define		KC_F			0x09		// Decimal 9
#define		KC_G			0x0A		// Decimal 10
#define		KC_H			0x0B		// Decimal 11
#define		KC_I			0x0C		// Decimal 12
#define		KC_J			0x0D		// Decimal 13
#define		KC_K			0x0E		// Decimal 14
#define		KC_L			0x0F		// Decimal 15
#define		KC_M			0x10		// Decimal 16
#define		KC_N			0x11		// Decimal 17
#define		KC_O			0x12		// Decimal 18
#define		KC_P			0x13		// Decimal 19
#define		KC_Q			0x14		// Decimal 20
#define		KC_R			0x15		// Decimal 21
#define		KC_S			0x16		// Decimal 22
#define		KC_T			0x17		// Decimal 23
#define		KC_U			0x18		// Decimal 24
#define		KC_V			0x19		// Decimal 25
#define		KC_W			0x1A		// Decimal 26
#define		KC_X			0x1B		// Decimal 27
#define		KC_Y			0x1C		// Decimal 28
#define		KC_Z			0x1D		// Decimal 29
#define		KC_1			0x1E		// Decimal 30
#define		KC_2			0x1F		// Decimal 31
#define		KC_3			0x20		// Decimal 32
#define		KC_4			0x21		// Decimal 33
#define		KC_5			0x22		// Decimal 34
#define		KC_6			0x23		// Decimal 35
#define		KC_7			0x24		// Decimal 36
#define		KC_8			0x25		// Decimal 37
#define		KC_9			0x26		// Decimal 38
#define		KC_0			0x27		// Decimal 39
#define		KC_ENTER		0x28		// Decimal 40 & KC_ENT
#define		KC_ESCAPE		0x29		// Decimal 41 & KC_ESC
#define		KC_BACKSPACE	0x2A		// Decimal 42 & KC_BS
#define		KC_TAB			0x2B		// Decimal 43
#define		KC_SPACE		0x2C		// Decimal 44 & KC_SPA
#define		KC_MINUS		0x2D		// Decimal 45 & KC_MIN
#define		KC_EQUAL		0x2E		// Decimal 46 & KC_EQU
#define		KC_LEFTBRACKET	0x2F		// Decimal 47 & KC_LB
#define		KC_RIGHTBRACKET	0x30		// Decimal 48 & KC_RB
#define		KC_BACKSLASH	0x31		// Decimal 49 & KC_BSL v's ( BS Back Space)
#define		KC_NONUSHASH	0x32		// Decimal 50 & KC_NUH
#define		KC_SEMICOLON	0x33		// Decimal 51 & KC_SEM
#define		KC_QUOTE		0x34		// Decimal 52 & KC_QUO
#define		KC_GRAVE		0x35		// Decimal 53 & KC_GRA
#define		KC_COMMA		0x36		// Decimal 54 & KC_COM
#define		KC_PERIOD		0x37		// Decimal 55 & KC_PER & KC_DOT
#define		KC_SLASH		0x38		// Decimal 56 & KC_SLA
#define		KC_CAPSLOCK		0x39		// Decimal 57 & KC_CLK
#define		KC_F1			0x3A		// Decimal 58
#define		KC_F2			0x3B		// Decimal 59
#define		KC_F3			0x3C		// Decimal 60
#define		KC_F4			0x3D		// Decimal 61
#define		KC_F5			0x3E		// Decimal 62
#define		KC_F6			0x3F		// Decimal 63
#define		KC_F7			0x40		// Decimal 64
#define		KC_F8			0x41		// Decimal 65
#define		KC_F9			0x42		// Decimal 66
#define		KC_F10			0x43		// Decimal 67
#define		KC_F11			0x44		// Decimal 68
#define		KC_F12			0x45		// Decimal 69
#define		KC_PRINTSCREEN	0x46		// Decimal 70 & KC_PS
#define		KC_SCROLLLOCK	0x47		// Decimal 71 & KC_SLK
#define		KC_PAUSE		0x48		// Decimal 72
#define		KC_INSERT		0x49		// Decimal 73 & KC_INS
#define		KC_HOME			0x4A		// Decimal 74
#define		KC_PAGEUP		0x4B		// Decimal 75 & KC_PGUP
#define		KC_DELETE		0x4C		// Decimal 76 & KC_DEL
#define		KC_END			0x4D		// Decimal 77
#define		KC_PAGEDOWN		0x4E		// Decimal 78 & KC_PGDN
#define		KC_RIGHTARROW	0x4F		// Decimal 79 & KC_RIGHT
#define		KC_LEFTARROW	0x50		// Decimal 80 & KC_LEFT
#define		KC_DOWNARROW	0x51		// Decimal 81 & KC_DOWN
#define		KC_UPARROW		0x52		// Decimal 82 & KC_UP
#define		KC_NUMLOCK		0x53		// Decimal 83 & KC_NLK
#define		KP_SLASH		0x54		// Decimal 84 & KP_SLA
#define		KP_ASTERISK		0x55		// Decimal 85 & KP_AST & KP_STAR
#define		KP_MINUS		0x56		// Decimal 86 & KP_MIN
#define		KP_PLUS			0x57		// Decimal 87 & KP_PLU
#define		KP_ENTER		0x58		// Decimal 88 & KP_ENT
#define		KP_1			0x59		// Decimal 89
#define		KP_2			0x5A		// Decimal 90
#define		KP_3			0x5B		// Decimal 91
#define		KP_4			0x5C		// Decimal 92
#define		KP_5			0x5D		// Decimal 93
#define		KP_6			0x5E		// Decimal 94
#define		KP_7			0x5F		// Decimal 95
#define		KP_8			0x60		// Decimal 96
#define		KP_9			0x61		// Decimal 97
#define		KP_0			0x62		// Decimal 98
#define		KP_PERIOD		0x63		// Decimal 99 KP_PER & KP_DOT
#define		KC_NONUSBACKSLASH	0x64	// Decimal 100 & KC_NBS
#define		KC_APPLICATION	0x65		// Decimal 101 & KC_APP
#define		KC_POWER		0x66		// Decimal 102 & KC_POW
#define		KP_EQUAL		0x67		// Decimal 103 & KP_EQU
#define		KC_F13			0x68		// Decimal 104
#define		KC_F14			0x69		// Decimal 105
#define		KC_F15			0x6A		// Decimal 106
#define		KC_F16			0x6B		// Decimal 107
#define		KC_F17			0x6C		// Decimal 108
#define		KC_F18			0x6D		// Decimal 109
#define		KC_F19			0x6E		// Decimal 110
#define		KC_F20			0x6F		// Decimal 111
#define		KC_F21			0x70		// Decimal 112
#define		KC_F22			0x71		// Decimal 113
#define		KC_F23			0x72		// Decimal 114
#define		KC_F24			0x73		// Decimal 115
#define		KC_EXECUTE		0x74		// Decimal 116 & KC_EXE
#define		KC_HELP			0x75		// Decimal 117
#define		KC_MENU			0x76		// Decimal 118
#define		KC_SELECT		0x77		// Decimal 119 & KC_SEL
#define		KC_STOP			0x78		// Decimal 120
#define		KC_AGAIN		0x79		// Decimal 121
#define		KC_UNDO			0x7A		// Decimal 122
#define		KC_CUT			0x7B		// Decimal 123
#define		KC_COPY			0x7C		// Decimal 124
#define		KC_PASTE		0x7D		// Decimal 125
#define		KC_FIND			0x7E		// Decimal 126
#define		KC_MUTE			0x7F		// Decimal 127
#define		KC_VOLUMUP		0x80		// Decimal 128 & KC_VU
#define		KC_VOLUMEDOWN	0x81		// Decimal 129 & KC_VD
#define		KC_LOCKINGCAPS	0x82		// Decimal 130 & KC_LKC
#define		KC_LOCKINGNUM	0x83		// Decimal 131 & KC_LKN
#define		KC_LOCKINGSCROLL	0x84	// Decimal 132 & KC_LKS
#define		KP_COMMA			0x85	// Decimal 133 & KP_COM
#define		KP_EQUALAS400		0x86	// Decimal 134 & KP_EQA
#define		KC_INTERNATIONAL1	0x87	// Decimal 135 & KC_I1
#define		KC_INTERNATIONAL2	0x88	// Decimal 136 & KC_I2
#define		KC_INTERNATIONAL3	0x89	// Decimal 137 & KC_I3
#define		KC_INTERNATIONAL4	0x8A	// Decimal 138 & KC_I4
#define		KC_INTERNATIONAL5	0x8B	// Decimal 139 & KC_I5
#define		KC_INTERNATIONAL6	0x8C	// Decimal 140 & KC_I6
#define		KC_INTERNATIONAL7	0x8D	// Decimal 141 & KC_I7
#define		KC_INTERNATIONAL8	0x8E	// Decimal 142 & KC_I8
#define		KC_INTERNATIONAL9	0x8F	// Decimal 143 & KC_I9
#define		KC_LANGUAGE1		0x90	// Decimal 144 & KC_L1
#define		KC_LANGUAGE2		0x91	// Decimal 145 & KC_L2
#define		KC_LANGUAGE3		0x92	// Decimal 146 & KC_L3
#define		KC_LANGUAGE4		0x93	// Decimal 147 & KC_L4
#define		KC_LANGUAGE5		0x94	// Decimal 148 & KC_L5
#define		KC_LANGUAGE6		0x95	// Decimal 149 & KC_L6
#define		KC_LANGUAGE7		0x96	// Decimal 150 & KC_L7
#define		KC_LANGUAGE8		0x97	// Decimal 151 & KC_L8
#define		KC_LANGUAGE9		0x98	// Decimal 152 & KC_L9
#define		KC_ALTERASE			0x99	// Decimal 153 & KC_AE
#define		KC_SYSREQ			0x9A	// Decimal 154 & KC_SR
#define		KC_CANCEL			0x9B	// Decimal 155 & KC_CAN
#define		KC_CLEAR			0x9C	// Decimal 156 & KC_CLR
#define		KC_PRIOR			0x9D	// Decimal 157 & KC_PRI
#define		KC_RETURN			0x9E	// Decimal 158 & KC_RET
#define		KC_SEPARATOR		0x9F	// Decimal 159 & KC_SEP
#define		KC_OUT				0xA0	// Decimal 160
#define		KC_OPERERATOR		0xA1	// Decimal 161 & KC_OP
#define		KC_CLEARAGAIN		0xA2	// Decimal 162 & KC_CA
#define		KC_CLEARSELECT		0xA3	// Decimal 163 & KC_CS
#define		KC_EXTENDEDSELECT	0xA4	// Decimal 164 & KC_ES 
#define		RESERVED_0xA5		0xA5	// Decimal 165
#define		RESERVED_0xA6		0xA6	// Decimal 166
#define		RESERVED_0xA7		0xA7	// Decimal 167
#define		RESERVED_0xA8		0xA8	// Decimal 168
#define		RESERVED_0xA9		0xA9	// Decimal 169
#define		RESERVED_0xAA		0xAA	// Decimal 170
#define		RESERVED_0xAB		0xAB	// Decimal 171
#define		RESERVED_0xAC		0xAC	// Decimal 172
#define		RESERVED_0xAD		0xAD	// Decimal 173
#define		RESERVED_0xAE		0xAE	// Decimal 174
#define		RESERVED_0xAF		0xAF	// Decimal 175
#define		KP_00				0xB0	// Decimal 176
#define		KP_000				0xB1	// Decimal 177
#define		KC_THOUSANDSSEPARATOR	0xB2	// Decimal 178 & KC_TS
#define		KC_DECIMALSEPARATOR		0xB3	// Decimal 179 & KC_DS
#define		KC_CURRENCYUNIT			0xB4	// Decimal 180 & KC_CU
#define		KC_CURRENCYSUBUNIT		0xB5	// Decimal 181 & KC_CSU
#define		KP_LEFTPARENTHESIS		0xB6	// Decimal 182 & KP_LPAR
#define		KP_RIGHTPARENTHESIS		0xB7	// Decimal 183 & KP_RPAR
#define		KP_LEFTBRACE	0xB8		// Decimal 184 & KP_LBR
#define		KP_RIGHTBRACE	0xB9		// Decimal 185 & KP_RBR
#define		KP_TAB			0xBA		// Decimal 186
#define		KP_BACKSPACE	0xBB		// Decimal 187 & KP_BS
#define		KP_A			0xBC		// Decimal 188
#define		KP_B			0xBD		// Decimal 189
#define		KP_C			0xBE		// Decimal 190
#define		KP_D			0xBF		// Decimal 191
#define		KP_E			0xC0		// Decimal 192
#define		KP_F			0xC1		// Decimal 193
#define		KP_XOR			0xC2		// Decimal 194
#define		KP_CARRET		0xC3		// Decimal 195 & KP_HAT
#define		KP_PERCENT		0xC4		// Decimal 196 & KP_PER
#define		KP_LESSTHAN		0xC5		// Decimal 197 & KP_LT
#define		KP_GREATERTHAN	0xC6		// Decimal 198 & KP_GT
#define		KP_AMPERSAND	0xC7		// Decimal 199 & KP_AMP
#define		KP_AMPERSAND2	0xC8		// Decimal 200 & KP_AMP2
#define		KP_VERTICALBAR	0xC9		// Decimal 201 & KP_BAR,PIPE
#define		KP_VERTICALBAR2	0xCA		// Decimal 202 & KP_BAR2,PIPE2
#define		KP_COLON		0xCB		// Decimal 203
#define		KP_HASH			0xCC		// Decimal 204
#define		KP_SPACE		0xCD		// Decimal 205 & KP_SPA
#define		KP_COMMERCIALAT	0xCE		// Decimal 206 & KP_AT
#define		KP_EXCLAMATION	0xCF		// Decimal 207 & KP_EX
#define		KP_MEMORYSTORE	0xD0		// Decimal 208 & KP_MST
#define		KP_MEMORYRECALL	0xD1		// Decimal 209 & KP_MRE
#define		KP_MEMORYCLEAR	0xD2		// Decimal 210 & KP_MCL
#define		KP_MEMORYADD	0xD3		// Decimal 211 & KP_MAD
#define		KP_MEMORYSUB	0xD4		// Decimal 212 & KP_MSU
#define		KP_MEMORYMUL	0xD5		// Decimal 213 & KP_MMU
#define		KP_MEMORYDIV	0xD6		// Decimal 214 & KP_MDI
#define		KP_PLUSMINUS	0xD7		// Decimal 215 & KP_PM
#define		KP_CLEAR		0xD8		// Decimal 216 & KP_CLR
#define		KP_CLEARENTRY	0xD9		// Decimal 217 & KP_CE
#define		KP_BINARY		0xDA		// Decimal 218 & KP_BIN
#define		KP_OCTAL		0xDB		// Decimal 219 & KP_OCT
#define		KP_DECIMAL		0xDC		// Decimal 220 & KP_DEC
#define		KP_HEXADECIMAL	0xDD		// Decimal 221 & KP_HEX
#define		RESERVED_0xDE	0xDE		// Decimal 222
#define		RESERVED_0xDF	0xDF		// Decimal 223
// Modifiers
#define		KC_LEFTCONTROL 	0xE0		// Decimal 224 & KC_LC
#define		KC_LEFTSHIFT	0xE1		// Decimal 225 & KC_LS
#define		KC_LEFTALT		0xE2		// Decimal 226 & KC_LA
#define		KC_LEFTGUI		0xE3		// Decimal 227 & KC_LG
#define		KC_RIGHTCONTROL	0xE4		// Decimal 228 & KC_RC
#define		KC_RIGHTSHIFT	0xE5		// Decimal 229 & KC_RS
#define		KC_RIGHTALT		0xE6		// Decimal 230 & KC_RA
#define		KC_RIGHTGUI		0xE7		// Decimal 231 & KC_RG
//
#define		RESERVED_0xE8	0xE8		// Decimal 232
#define		RESERVED_0xE9	0xE9		// Decimal 233
#define		RESERVED_0xEA	0xEA		// Decimal 234
#define		RESERVED_0xEB	0xEB		// Decimal 235
#define		RESERVED_0xEC	0xEC		// Decimal 236
#define		RESERVED_0xED	0xED		// Decimal 237
#define		RESERVED_0xEE	0xEE		// Decimal 238
#define		RESERVED_0xEF	0xEF		// Decimal 239
#define		RESERVED_0xF0	0xF0		// Decimal 240
#define		RESERVED_0xF1	0xF1		// Decimal 241
#define		RESERVED_0xF2	0xF2		// Decimal 242
#define		RESERVED_0xF3	0xF3		// Decimal 243
#define		RESERVED_0xF4	0xF4		// Decimal 244
#define		RESERVED_0xF5	0xF5		// Decimal 245
#define		RESERVED_0xF6	0xF6		// Decimal 246
#define		RESERVED_0xF7	0xF7		// Decimal 247
#define		RESERVED_0xF8	0xF8		// Decimal 248
#define		RESERVED_0xF9	0xF9		// Decimal 249
#define		RESERVED_0xFA	0xFA		// Decimal 250
#define		RESERVED_0xFB	0xFB		// Decimal 251
#define		RESERVED_0xFC	0xFC		// Decimal 252
#define		RESERVED_0xFD	0xFD		// Decimal 253
#define		RESERVED_0xFE	0xFE		// Decimal 254
#define		KC_LASTCODE		0xFF		// Decimal 255 // Also Reserved
//

// Abbreviated keycodes.
// With exceptions like the well known PGDN, PGUP, LEFT, RIGHT, UP, DOWN, these generally are;
// first letters where the verbose is two words, eg KC_EXTENDEDSELECT is KC_ES,
// the first three letters. eg KC_SEMICOLON is KC_SEM, KC_SELECT is KC_SEL,
// or, just made up. 
// Not every key has an abbreviation. If you make up a new one, make sure it doesn't conflict.
//
// KC_ defines a keyboard Key, KP_ defines a keypad Key (including, but more than just, the numeric keypad)
//
#define		KC_NO		0x00		// Decimal 0 & KC_NOOP 
#define		KC_ERO		0x01		// Decimal 1 & KC_ERRORROLLOVER
#define		KC_EPF		0x02		// Decimal 2 & KC_ERRORPOSTFAIL
#define		KC_UND		0x03		// Decimal 3 & KC_UNDEFINED
#define		KC_ENT		0x28		// Decimal 40 & KC_ENTER
#define		KC_ESC		0x29		// Decimal 41 & KC_ESCAPE
#define		KC_BS		0x2A		// Decimal 42 & KC_BACKSPACE
#define		KC_SPA		0x2C		// Decimal 44 & KC_SPACE
#define		KC_MIN		0x2D		// Decimal 45 & KC_MINUS
#define		KC_EQU		0x2E		// Decimal 46 & KC_EQUAL
#define		KC_LB		0x2F		// Decimal 47 & KC_LEFTBRACKET
#define		KC_RB		0x30		// Decimal 48 & KC_RIGHTBRACKET
#define		KC_BSL		0x31		// Decimal 49 & KC_BACKSLASH
#define		KC_NUH		0x32		// Decimal 50 & KC_NONUSHASH
#define		KC_SEM		0x33		// Decimal 51 & KC_SEMICOLON
#define		KC_QUO		0x34		// Decimal 52 & KC_QUOTE
#define		KC_GRA		0x35		// Decimal 53 & KC_GRAVE
#define		KC_COM		0x36		// Decimal 54 & KC_COMMA
#define		KC_PER		0x37		// Decimal 55 & KC_PERIOD & KC_DOT
#define		KC_DOT		0x37		// Decimal 55 & KC_PERIOD & KC_PER
#define		KC_SLA		0x38		// Decimal 56 & KC_SLASH
#define		KC_CLK		0x39		// Decimal 57 & KC_CAPSLOCK
#define		KC_PS		0x46		// Decimal 70 & KC_PRINTSCREEN
#define		KC_SLK		0x47		// Decimal 71 & KC_SCROLLLOCK
#define		KC_INS		0x49		// Decimal 73 & KC_INSERT
#define		KC_PGUP		0x4B		// Decimal 75 & KC_PAGEUP
#define		KC_DEL		0x4C		// Decimal 76 & KC_DELETE
#define		KC_PGDN		0x4E		// Decimal 78 & KC_PAGEDOWN
#define		KC_RIGHT	0x4F		// Decimal 79 & KC_RIGHTARROW
#define		KC_LEFT		0x50		// Decimal 80 & KC_LEFTARROW
#define		KC_DOWN		0x51		// Decimal 81 & KC_DOWNARROW
#define		KC_UP		0x52		// Decimal 82 & KC_UPARROW
#define		KC_NLK		0x53		// Decimal 83 & KC_NUMLOCK
#define		KP_SLA		0x54		// Decimal 84 & KP_SLASH
#define		KP_AST		0x55		// Decimal 85 & KP_ASTERISK & KP_STAR
#define		KP_STAR		0x55		// Decimal 85 & KP_ASTERISK & KP_AST
#define		KP_MIN		0x56		// Decimal 86 & KP_MINUS
#define		KP_PLU		0x57		// Decimal 87 & KP_PLUS
#define		KP_ENT		0x58		// Decimal 88 & KP_ENTER
#define		KC_NBS		0x64		// Decimal 100 & KC_NONUSBACKSLASH
#define		KC_APP		0x65		// Decimal 101 & KC_APPLICATION
#define		KC_POW		0x66		// Decimal 102 & KC_POWER
#define		KP_EQU		0x67		// Decimal 103 & KP_EQUAL
#define		KC_EXE		0x74		// Decimal 116 & KC_EXECUTE
#define		KC_SEL		0x77		// Decimal 119 & KC_SELECT
#define		KC_VU		0x80		// Decimal 128 & KC_VOLUMUP
#define		KC_VD		0x81		// Decimal 129 & KC_VOLUMEDOWN
#define		KC_LKC		0x82		// Decimal 130 & KC_LOCKINGCAPS
#define		KC_LKN		0x83		// Decimal 131 & KC_LOCKINGNUM
#define		KC_LKS		0x84		// Decimal 132 & KC_LOCKINGSCROLL
#define		KP_COM		0x85		// Decimal 133 & KP_COMMA
#define		KP_EQA		0x86		// Decimal 134 & KP_EQUALAS400
#define		KC_I1		0x87		// Decimal 135 & KC_INTERNATIONAL1
#define		KC_I2		0x88		// Decimal 136 & KC_INTERNATIONAL2
#define		KC_I3		0x89		// Decimal 137 & KC_INTERNATIONAL3
#define		KC_I4		0x8A		// Decimal 138 & KC_INTERNATIONAL4
#define		KC_I5		0x8B		// Decimal 139 & KC_INTERNATIONAL5
#define		KC_I6		0x8C		// Decimal 140 & KC_INTERNATIONAL6
#define		KC_I7		0x8D		// Decimal 141 & KC_INTERNATIONAL7
#define		KC_I8		0x8E		// Decimal 142 & KC_INTERNATIONAL8
#define		KC_I9		0x8F		// Decimal 143 & KC_INTERNATIONAL9
#define		KC_L1		0x90		// Decimal 144 & KC_LANGUAGE1
#define		KC_L2		0x91		// Decimal 145 & KC_LANGUAGE2
#define		KC_L3		0x92		// Decimal 146 & KC_LANGUAGE3
#define		KC_L4		0x93		// Decimal 147 & KC_LANGUAGE4
#define		KC_L5		0x94		// Decimal 148 & KC_LANGUAGE5
#define		KC_L6		0x95		// Decimal 149 & KC_LANGUAGE6
#define		KC_L7		0x96		// Decimal 150 & KC_LANGUAGE7
#define		KC_L8		0x97		// Decimal 151 & KC_LANGUAGE8
#define		KC_L9		0x98		// Decimal 152 & KC_LANGUAGE9
#define		KC_AE		0x99		// Decimal 153 & KC_ALTERASE
#define		KC_SR		0x9A		// Decimal 154 & KC_SYSREQ
#define		KC_CAN		0x9B		// Decimal 155 & KC_CANCEL
#define		KC_CLR		0x9C		// Decimal 156 & KC_CLEAR
#define		KC_PRI		0x9D		// Decimal 157 & KC_PRIOR
#define		KC_RET		0x9E		// Decimal 158 & KC_RETURN
#define		KC_SEP		0x9F		// Decimal 159 & KC_SEPARATOR
#define		KC_OP		0xA1		// Decimal 161 & KC_OPERERATOR
#define		KC_CA		0xA2		// Decimal 162 & KC_CLEARAGAIN
#define		KC_CS		0xA3		// Decimal 163 & KC_CLEARSELECT
#define		KC_ES		0xA4		// Decimal 164 & KC_EXTENDEDSELECT
#define		KC_TS		0xB2		// Decimal 178 & KC_THOUSANDSSEPARATOR
#define		KC_DS		0xB3		// Decimal 179 & KC_DECIMALSEPARATOR
#define		KC_CU		0xB4		// Decimal 180 & KC_CURRENCYUNIT
#define		KC_CSU		0xB5		// Decimal 181 & KC_CURRENCYSUBUNIT
#define		KP_LPAR		0xB6		// Decimal 182 & KP_LEFTPARENTHESIS
#define		KP_RPAR		0xB7		// Decimal 183 & KP_RIGHTPARENTHESIS
#define		KP_LBR		0xB8		// Decimal 184 & KP_LEFTBRACE
#define		KP_RBR		0xB9		// Decimal 185 & KP_RIGHTBRACE
#define		KP_BS		0xBB		// Decimal 187 & KP_BACKSPACE
#define		KP_HAT		0xC3		// Decimal 195 & KP_CARRET
#define		KP_PER		0xC4		// Decimal 196 & KP_PERCENT
#define		KP_LT		0xC5		// Decimal 197 & KP_LESSTHAN
#define		KP_GT		0xC6		// Decimal 198 & KP_GREATERTHAN
#define		KP_AMP		0xC7		// Decimal 199 & KP_AMPERSAND
#define		KP_AMP2		0xC8		// Decimal 200 & KP_AMPERSAND2
#define		KP_BAR		0xC9		// Decimal 201 & KP_VERTICALBAR & KP_PIPE
#define		KP_PIPE		0xC9		// Decimal 201 & KP_VERTICALBAR & KP_BAR
#define		KP_BAR2		0xCA		// Decimal 202 & KP_VERTICALBAR2 & KP_PIPE2
#define		KP_PIPE2	0xCA		// Decimal 202 & KP_VERTICALBAR2 & KP_BAR2
#define		KP_SPA		0xCD		// Decimal 205 & KP_SPACE
#define		KP_AT		0xCE		// Decimal 206 & KP_COMMERCIALAT
#define		KP_EX		0xCF		// Decimal 207 & KP_EXCLAMATION
#define		KP_MST		0xD0		// Decimal 208 & KP_MEMORYSTORE
#define		KP_MRE		0xD1		// Decimal 209 & KP_MEMORYRECALL
#define		KP_MCL		0xD2		// Decimal 210 & KP_MEMORYCLEAR
#define		KP_MAD		0xD3		// Decimal 211 & KP_MEMORYADD
#define		KP_MSU		0xD4		// Decimal 212 & KP_MEMORYSUB
#define		KP_MMU		0xD5		// Decimal 213 & KP_MEMORYMUL
#define		KP_MDI		0xD6		// Decimal 214 & KP_MEMORYDIV
#define		KP_PM		0xD7		// Decimal 215 & KP_PLUSMINUS
#define		KP_CLR		0xD8		// Decimal 216 & KP_CLEAR
#define		KP_CE		0xD9		// Decimal 217 & KP_CLEARENTRY
#define		KP_BIN		0xDA		// Decimal 218 & KP_BINARY
#define		KP_OCT		0xDB		// Decimal 219 & KP_OCTAL
#define		KP_DEC		0xDC		// Decimal 220 & KP_DECIMAL
#define		KP_HEX		0xDD		// Decimal 221 & KP_HEXADECIMAL
// Modifiers
#define		KC_LC		0xE0		// Decimal 224 & KC_LEFTCONTROL 
#define		KC_LS		0xE1		// Decimal 225 & KC_LEFTSHIFT
#define		KC_LA		0xE2		// Decimal 226 & KC_LEFTALT
#define		KC_LG		0xE3		// Decimal 227 & KC_LEFTGUI
#define		KC_RC		0xE4		// Decimal 228 & KC_RIGHTCONTROL
#define		KC_RS		0xE5		// Decimal 229 & KC_RIGHTSHIFT
#define		KC_RA		0xE6		// Decimal 230 & KC_RIGHTALT
#define		KC_RG		0xE7		// Decimal 231 & KC_RIGHTGUI
