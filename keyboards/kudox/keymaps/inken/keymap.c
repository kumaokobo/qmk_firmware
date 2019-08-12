#include QMK_KEYBOARD_H
#include"keymap_jp.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)

#define KC_ALES LALT_T(KC_ESC)

#define KC_L1SYM LT(_SYMB, KC_LANG1)
#define KC_L2SYM LT(_SYMB, KC_LANG2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                   KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_BSPC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,SYM_L,                   KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,JP_AT   ,KC_BSPC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┘                └────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                   KC_H    ,KC_J    ,KC_K    ,KC_L    ,JP_MINS ,KC_ENT  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                                  ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                                   KC_F12   ,KC_N    ,KC_M    ,JP_UNDS ,XXXXXXX   ,SYM_L   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                ┌────────┼────────┼────────┴────────┼────────┼────────┼────────┤
     KC_LGUI ,KC_LALT ,XXXXXXX ,XXXXXXX  ,KC_LANG2,JP_COMM ,JP_DOT,                  KC_SPC  ,KC_SPC  ,KC_LANG1,KC_LEFT ,KC_DOWN ,KC_UP ,KC_RGHT
  //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘                └────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                   XXXXXXX ,JP_CIRC ,JP_YEN  ,JP_TILD ,JP_PIPE ,KC_DEL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,                  XXXXXXX   ,XXXXXXX ,JP_LBRC ,JP_RBRC ,JP_LCBR ,JP_RCBR ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┘                └────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,KC_F11  ,KC_F12  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                                   XXXXXXX ,JP_PLUS ,JP_ASTR ,JP_SCLN ,JP_COLN ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                                  ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                                   XXXXXXX ,XXXXXXX ,JP_SLSH ,JP_QUES ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                ┌────────┼────────┼────────┴────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                 XXXXXXX ,XXXXXXX ,KC_BSPC ,KC_MUTE ,KC_VOLD ,KC_VOLU,XXXXXXX
  //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘                └────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  )
};