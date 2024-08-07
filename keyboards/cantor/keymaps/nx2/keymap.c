#include QMK_KEYBOARD_H
#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3( 
     /*  
      * ┌┬───────┬───────┬───────┬───────┬───────┐┌┤    ├┐┌┤    ├┐┌───────┬───────┬───────┬───────┬───────┬┐
      * ││   Q   │   W   │   E   │   R   │   T   ││      ││      ││   Z   │   U   │   I   │   O   │   P   ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││SH A   │AL S   │CT D   │SU F   │   G   ││      ││      ││   H   │SU J   │CT K   │AL L   │SH :   ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││   Y   │   X   │   C   │   V   │   B   ││      ││      ││   N   │   M   │   ,   │   .   │   -   ││
      * └┴───────┴───────┴───────┴───────┴───────┘└──────┘└──────┘└───────┴───────┴───────┴───────┴───────┴┘
      *                          ┌───────┬───────┬───────┐┌───────┬───────┬───────┐       
      *                          │>1 Entr│   󱁐   |  Tab  |│  Esc  │  Bsp  |>2     |       
      *                          └───────┴───────┴───────┘└───────┴───────┴───────┘
      */
        KC_NO, DE_Q,          DE_W,         DE_E,           DE_R,         DE_T,   /**/ DE_Z,    DE_U,          DE_I,         DE_O,         DE_P,    KC_NO,
        KC_NO, LSFT_T(DE_A),  LALT_T(DE_S), LCTL_T(DE_D),   LGUI_T(DE_F), DE_G,   /**/ DE_H,    RGUI_T(DE_J),  RCTL_T(DE_K), RALT_T(DE_L), KC_LSFT, KC_NO,
        KC_NO, DE_Y,          DE_X,         DE_C,           DE_V,         DE_B,   /**/ DE_N,    DE_M,          DE_COMM,      DE_DOT,       KC_PMNS, KC_NO,
                                            LT(1, KC_ENT),  KC_SPC,       KC_TAB, /**/ KC_ESC,  KC_BSPC,       LT(2, KC_DEL)
    ),
    [1] = LAYOUT_split_3x6_3(  
     /*
      * ┌┬───────┬───────┬───────┬───────┬───────┐┌┤    ├┐┌┤    ├┐┌───────┬───────┬───────┬───────┬───────┬┐
      * ││   F1  │  F2   │  F3   │  F4   │  F5   ││      ││      ││  F6   │  F7   │  F8   │  F9   │  F10  ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││SH 1   │AL 2   │CT 3   │SU 4   │   5   ││      ││      ││   6   │SU 7   │CT 8   │AL 9   │SH 0   ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││   ä   │   ß   │       │  F11  │       ││      ││      ││       │  F12  │   ü   │   ö   │       ││
      * └┴───────┴───────┴───────┴───────┴───────┘└──────┘└──────┘└───────┴───────┴───────┴───────┴───────┴┘
      *                          ┌───────┬───────┬───────┐┌───────┬───────┬───────┐       
      *                          │PRESSED│       |       |│       │AppsKey|  >3   |       
      *                          └───────┴───────┴───────┘└───────┴───────┴───────┘
      */
        KC_NO, KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5, /**/ KC_F6,   KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_NO,
        KC_NO, LSFT_T(DE_1), LALT_T(DE_2), LCTL_T(DE_3), LGUI_T(DE_4), DE_5,  /**/ DE_6,    RGUI_T(DE_7), RCTL_T(DE_8), RALT_T(DE_9), RSFT_T(DE_0), KC_NO,
        KC_NO, DE_ADIA,      DE_SS,        KC_NO,        KC_F11,       KC_NO, /**/ KC_NO,   KC_F12,       DE_UDIA,      DE_ODIA,      KC_NO,        KC_NO,
                                           KC_TRNS,      KC_NO,        KC_NO, /**/ KC_NO,   KC_APP,       LT(3, KC_NO) 
    ),
    [2] = LAYOUT_split_3x6_3(
     /*
      * ┌┬───────┬───────┬───────┬───────┬───────┐┌┤    ├┐┌┤    ├┐┌───────┬───────┬───────┬───────┬───────┬┐
      * ││ PRNTS │  INS  |   󰒮   │   󰝝   │       ││      ││      ││ PGUP  │ CTL←  │ CTL↓  | CTL↑  │ CTL→  ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││SH POS │AL END │CT 󰐎   │SU 󰝟   │       ││      ││      ││       │   ←   │   ↓   │   ↑   │   →   ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││ PAUSE │       │   󰒭   │   󰝞   │       ││      ││      ││ PGDWN │  SC←  │  SH←  │  SH→  │  SC→  ││
      * └┴───────┴───────┴───────┴───────┴───────┘└──────┘└──────┘└───────┴───────┴───────┴───────┴───────┴┘
      *                          ┌───────┬───────┬───────┐┌───────┬───────┬───────┐       
      *                          |  >3   │       |       |│       │       |PRESSED|       
      *                          └───────┴───────┴───────┘└───────┴───────┴───────┘
      */

        KC_NO, KC_PSCR,       KC_MPRV,        KC_NO,           KC_VOLU,         KC_NO, /**/ KC_PGUP, RCTL(KC_LEFT),   RCTL(KC_DOWN),   RCTL(KC_UP),   RCTL(KC_RGHT),   KC_NO,
        KC_NO, LSFT_T(KC_NO), LALT_T(KC_END), LCTL_T(KC_MPLY), LGUI_T(KC_MUTE), KC_NO, /**/ KC_NO,   KC_LEFT,         KC_DOWN,         KC_UP,         KC_RGHT,         KC_NO,
        KC_NO, KC_PAUSE,      KC_MNXT,        KC_NO,           KC_VOLD,         KC_NO, /**/ KC_PGDN, RCS(KC_LEFT),    RSFT(KC_LEFT),   RSFT(KC_RGHT), RCS(KC_RGHT),    KC_NO,
                                              LT(3, KC_NO),    KC_NO,           KC_NO, /**/ KC_NO,   KC_NO,           KC_TRNS
    ),
    [3] = LAYOUT_split_3x6_3(
     /*
      * ┌┬───────┬───────┬───────┬───────┬───────┐┌┤    ├┐┌┤    ├┐┌───────┬───────┬───────┬───────┬───────┬┐
      * ││   ^   │   °   │   @   │   €   │   \   ││      ││      ││   ~   │   {   │   [   │   ]   │   }   ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││SH !   │AL "   │CT §   │SU $   │   %   ││      ││      ││   &   │SU /   │CT (   │AL )   │SH =   ││
      * ├┼───────┼───────┼───────┼───────┼───────┤│      ││      │├───────┼───────┼───────┼───────┼───────┼┤
      * ││   `   │   '   │   ´   │   #   │   ?   ││      ││      ││   *   │   ~   │   <   │   |   │   >   ││  
      * └┴───────┴───────┴───────┴───────┴───────┘└──────┘└──────┘└───────┴───────┴───────┴───────┴───────┴┘
      *                          ┌───────┬───────┬───────┐┌───────┬───────┬───────┐       
      *                          │PRESSED│       |       |│       │       |PRESSED|       
      *                          └───────┴───────┴───────┘└───────┴───────┴───────┘
      */
        
        KC_NO, DE_CIRC,         DE_DEG,          DE_AT,           DE_EURO,        DE_BSLS, /**/  DE_TILD,   DE_LCBR,         DE_LBRC,         DE_RBRC,         DE_RCBR,        KC_NO,
        KC_NO, LSFT_T(DE_EXLM), LALT_T(DE_DQUO), LCTL_T(DE_SECT), LGUI_T(DE_DLR), DE_AMPR, /**/  DE_AMPR,   RGUI_T(DE_SLSH), RCTL_T(DE_LPRN), RALT_T(DE_RPRN), RSFT_T(DE_EQL), KC_NO,
        KC_NO, LSFT(DE_ACUT),   DE_QUOT,         DE_ACUT,         DE_HASH,        DE_QUES, /**/  DE_ASTR,   DE_TILD,         LSFT(DE_RABK),   DE_PIPE,         DE_RABK,        KC_NO,
                                                 KC_TRNS,         KC_NO,          KC_NO,   /**/  KC_NO,     KC_NO,           KC_TRNS
    )
};

