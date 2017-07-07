#include "planck.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
enum layers {
  _QWERTY = 0,
  _WORKMAN,
  _NORMAN,
  _DVORAK,
  _COLMAK,
  _LOWER,
  _RAISE,
  _ADJUST,
  _RS
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Requires KC_TRNS/_______ for the trigger key in the destination layer
#define LWR_SEM     LT(_LOWER, KC_SCLN)
#define LWR_SPC     LT(_LOWER, KC_SPC)
#define RS_BSPC     LT(_RAISE, KC_BSPC)
#define AD_TAB      LT(_ADJUST, KC_TAB)
#define SH_LBRC     LSFT_T(KC_LBRC)
#define SH_RBRC     RSFT_T(KC_RBRC)
#define CT_UNDS     RCTL_T(KC_UNDS)

#define LY_QWER     DF(_QWERTY)
#define LY_WORK     DF(_WORKMAN)
#define LY_NRMN     DF(_NORMAN)
#define LY_DVRK     DF(_DVORAK)
#define LY_CLMK     DF(_COLMAK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    KC_ESC ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_GRV ,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    CT_UNDS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_ENT ,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    SH_LBRC,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, SH_RBRC,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    KC_LCTL , KC_LGUI , KC_LALT ,    RS_BSPC   ,      AD_TAB     ,   LWR_SPC    , KC_RALT , KC_RCTL , KC_F24  ),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

[_WORKMAN] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    _______,    KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P, KC_SCLN, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______,    KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______,    KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L, KC_COMM,  KC_DOT, KC_SLSH, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______ , _______ , _______ ,   _______    ,     _______     ,    _______   , _______ , _______ ,  _______),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

[_NORMAN] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    _______, KC_Q   , KC_W   , KC_D   , KC_F   , KC_K   , KC_J   , KC_U   , KC_R   , KC_L   , KC_SCLN, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______, KC_A   , KC_S   , KC_E   , KC_T   , KC_G   , KC_Y   , KC_N   , KC_I   , KC_O   , KC_H   , _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_P   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______ , _______ , _______ ,   _______    ,     _______     ,    _______   , _______ , _______ ,  _______),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

[_DVORAK] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    _______, KC_QUOT, KC_COMM, KC_DOT , KC_P   , KC_Y   , KC_F   , KC_G   , KC_C   , KC_R   , KC_L   , _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______, KC_A   , KC_O   , KC_E   , KC_U   , KC_I   , KC_D   , KC_H   , KC_T   , KC_N   , KC_S   , _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______, KC_SCLN, KC_Q   , KC_J   , KC_K   , KC_X   , KC_B   , KC_M   , KC_W   , KC_V   , KC_Z   , _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______ , _______ , _______ ,   _______    ,     _______     ,    _______   , _______ , _______ ,  _______),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

[_COLMAK] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    _______, KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   , KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______, KC_A   , KC_R   , KC_S   , KC_T   , KC_D   , KC_H   , KC_N   , KC_E   , KC_I   , KC_O   , _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______ , _______ , _______ ,   _______    ,     _______     ,    _______   , _______ , _______ ,  _______),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

/* Lower */
[_LOWER] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_VOLU,  KC_INS, KC_PGUP,   KC_UP, KC_PGDN, XXXXXXX, KC_DEL ,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, KC_MUTE, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_QUOT,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_VOLD,  KC_END, KC_PGDN,  KC_EQL, KC_SLSH, KC_BSLS, KC_GRV ,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    KC_WBAK , KC_WREF , KC_WFWD ,    KC_DEL    ,     _______     ,   XXXXXXX    , _______ , _______ , _______ ),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

/* Raise */
[_RAISE] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC,   KC_4,    KC_5,    KC_6, KC_PPLS, KC_PENT,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_1,    KC_2,    KC_3, KC_PAST, KC_PSLS,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    _______ , _______ , _______ ,   XXXXXXX    ,     _______     ,     KC_0     , KC_PDOT , KC_PCMM ,  XXXXXXX),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

/* Adjust */
[_ADJUST] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    MO(_RS), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(_RS),
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX, LY_QWER, LY_WORK, LY_NRMN, LY_DVRK, LY_CLMK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX , XXXXXXX , XXXXXXX ,   XXXXXXX    ,     XXXXXXX     ,    XXXXXXX   , XXXXXXX , XXXXXXX , KC_CAPS ),
/*`---------+---------+---------+-----^^^^-----+-----------------+-----vvvv-----+---------+---------+---------'*/

/* Reset */
[_RS] = KEYMAP_PLANCK(
/*,--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.*/
    RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET  ,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
/*|--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------`--------|*/
     XXXXXXX , XXXXXXX , XXXXXXX ,   XXXXXXX    ,    XXXXXXX     ,    XXXXXXX   , XXXXXXX , XXXXXXX , XXXXXXX )
/*`----------+---------+---------+-----^^^^-----+----------------+-----vvvv-----+---------+---------+---------'*/
};

void matrix_init_user(void) {
  if (!eeconfig_is_enabled()) {
    eeconfig_init();
  }
}

uint32_t default_layer_state_set_kb(uint32_t state) {
  // persist changes to default layers
  eeconfig_update_default_layer(state);
  return state;
}
