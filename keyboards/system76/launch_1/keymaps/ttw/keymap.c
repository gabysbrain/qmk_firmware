#include QMK_KEYBOARD_H

// different key layers
#define NORM 0
#define GREEK 1
#define SYM 2

enum unicode_names {
  // Math keyboard symbols
  LOGICAL_AND,
  LOGICAL_OR,
  INTERSECTION,
  UNION,
  SUBSET,
  SUPERSET,
  FORALL,
  LEMNISCATE,
  EXISTENTIAL_QUALIFIER,
  PARTIAL_DERIVATIVE,
  UP_TACK,
  DOWN_TACK,
  RIGHT_TACK,
  LEFT_TACK,
  UP_ARROW,
  DOWN_ARROW,
  LEFT_ARROW,
  RIGHT_ARROW,
  LEFT_RIGHT_ARROW,
  LEFT_FLOOR,
  LEFT_CEILING,
  NOT_EQUAL_TO,
  TILDE_EQUALS,
  IDENTICAL_TO,
  LESS_THAN_EQUAL_TO,
  GREATER_THAN_EQUAL_TO
};
const uint32_t PROGMEM unicode_map[] = {
  [LOGICAL_AND] = 0x2227,
  [LOGICAL_OR] = 0x2228 ,
  [INTERSECTION] = 0x2229,
  [UNION] = 0x222A,
  [SUBSET] = 0x2282,
  [SUPERSET] = 0x2283,
  [FORALL] = 0x2200,
  [LEMNISCATE] = 0x221E,
  [EXISTENTIAL_QUALIFIER] = 0x018E,
  [PARTIAL_DERIVATIVE] = 0x2202,
  [UP_TACK] = 0x22A5,
  [DOWN_TACK] = 0x22A4,
  [RIGHT_TACK] = 0x22A2,
  [LEFT_TACK] = 0x22A3,
  [UP_ARROW] = 0x2191,
  [DOWN_ARROW] = 0x2193,
  [LEFT_ARROW] = 0x2190,
  [RIGHT_ARROW] = 0x2192,
  [LEFT_RIGHT_ARROW] = 0x2194,
  [LEFT_FLOOR] = 0x230A,
  [LEFT_CEILING] = 0x2308,
  [NOT_EQUAL_TO] = 0x2260,
  [TILDE_EQUALS] = 0x22CD,
  [IDENTICAL_TO] = 0x2261,
  [LESS_THAN_EQUAL_TO] = 0x2264,
  [GREATER_THAN_EQUAL_TO] = 0x2265,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |     FN     ||  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE  ||  PGUP  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |        ||        |
|     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \ ||  PGDN  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |   |        |
  |    SUPER   |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |   |  END   |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |
  |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |   SHIFT    |   UP   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |    CTRL    |  HYP   | META  | LALT   |    BACKSPACE    |   SPACE         |  SYM   |  GREEK |     SUPER   |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [NORM] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  MO(3),        KC_HOME,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGDN,
          KC_LGUI,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,       KC_END,
          KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,    KC_UP,
          KC_LCTL, KC_NO,   KC_NO, KC_LALT,     KC_BSPC,           KC_SPC,    MO(GREEK),    MO(SYM),   KC_LGUI,         KC_LEFT, KC_DOWN, KC_RGHT
  ),


  /* Layer 1, greek letters */
  [GREEK] = LAYOUT(
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS
  ),

  /* Layer 2, fancy math symbols on the keycaps */
  [SYM] = LAYOUT(
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
        KC_TRNS, X(LOGICAL_AND), X(LOGICAL_OR), X(INTERSECTION), X(UNION), X(SUBSET), X(SUPERSET), X(FORALL), X(LEMNISCATE), X(EXISTENTIAL_QUALIFIER), X(PARTIAL_DERIVATIVE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, X(UP_TACK), X(DOWN_TACK), X(RIGHT_TACK), X(LEFT_TACK), X(UP_ARROW), X(DOWN_ARROW), X(LEFT_ARROW), X(RIGHT_ARROW), X(LEFT_RIGHT_ARROW), KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
          KC_TRNS, X(LEFT_FLOOR), X(LEFT_CEILING), X(NOT_EQUAL_TO), X(TILDE_EQUALS), X(IDENTICAL_TO), X(LESS_THAN_EQUAL_TO), X(GREATER_THAN_EQUAL_TO), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, 
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS
  ),

    /* Layer 3, function layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            || PLAY/  |
| RESET  |        |        |        |        |        |        |        |        |        |        |        |        |            || PAUSE  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            || VOLUME |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |  DELETE    ||   UP   |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |  LED   |  LED   |  LED   || VOLUME |
|PRINT SCREEN|        |        |        |        |        |        |  PGUP  |  HOME  |  PGDN  |        |  DOWN  |  UP    | TOGGLE ||  DOWN  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |  VOL   |  VOL   |        |        |        |        |        |        |        |        |            |   |        |
  |            |        |  DOWN  |  UP    |  MUTE  |        |  LEFT  |  DOWN  |   UP   | RIGHT  |        |        |            |   |  MUTE  |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            |        |
  |                |        |        |        |        |        |  END   |        |        |        |        |            |  PGUP  |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |    DELETE       |   ENTER         |        |        |             |   |  HOME  |  PGDN  |  END   |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|

* 'RESET' resets the controller and puts the board into firmware flashing mode. If this key is hit accidentally, just unplug the board
*        and plug it back in.
*/

  [3] = LAYOUT(
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_MPLY,
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,      KC_VOLU,
        KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_PGDN, KC_TRNS, RGB_VAD, RGB_VAI, RGB_TOG, KC_VOLD,
          KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_MUTE,
              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_PGUP,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_DEL,           KC_ENT,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_HOME,  KC_PGDN, KC_END
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
