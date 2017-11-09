/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "NK87.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: default
   */
  KEYMAP(
     F(1),  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,            KC_PSCR,KC_SLCK, KC_BRK,
     F(1),   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,KC_BSPC,     KC_INS,KC_HOME,KC_PGUP,
     F(2),   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSLS,     KC_DEL, KC_END,KC_PGDN,
     F(3),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT,         KC_ENT,                     
     F(4),   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,                KC_RSFT,              KC_UP,       
  KC_LCTL,KC_LGUI,KC_LALT,                   F(5),                                KC_RALT,KC_RGUI, KC_APP,KC_RCTL,    KC_LEFT,KC_DOWN,KC_RGHT
  ),
  
  /* 1: Builtin Numpad (numkey)
   */ 
  KEYMAP(
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,   KC_4,   KC_5,   KC_6,KC_PPLS,_______,_______,_______,    _______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,   KC_1,   KC_2,   KC_3,KC_PAST,_______,        _______,                     
  _______,_______,_______,_______,_______,_______,_______,   KC_0,_______,_______,_______,                _______,            _______,       
  _______,_______,_______,                _______,                                _______,_______,_______,_______,    _______,_______,_______
  ), 
    
  /* 2: Mouse mode(IJKL)[Space]
  * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
  */
  KEYMAP(
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,_______,
  _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,    _______,_______,_______,
  _______,xxxxxxx,  KC_UP,xxxxxxx,xxxxxxx,xxxxxxx,KC_WH_L,KC_WH_U,KC_MS_U,KC_WH_D,KC_WH_R,KC_WBAK,KC_WFWD,_______,    _______,_______,_______,
  _______,KC_LEFT,KC_DOWN,KC_RGHT,xxxxxxx,xxxxxxx,xxxxxxx,KC_MS_L,KC_MS_D,KC_MS_R,KC_BTN1,xxxxxxx,        _______,                     
  _______,KC_ACL0,KC_ACL1,KC_ACL2,KC_ACL2,KC_BTN4,KC_BTN5,KC_BTN1,KC_BTN3,KC_BTN2,xxxxxxx,                _______,            _______,      
  _______,_______,_______,                KC_BTN1,                                _______,_______,_______,_______,    _______,_______,_______
  ),
    
  /* 3: LShift and Layer switching
   * Shift + ESC = ~
   * Shift + KC_BSPC = DEL_LINE
   */    
  KEYMAP(
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,_______,
   KC_GRV,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   F(0),    _______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,                     
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                _______,            _______,      
  _______,_______,_______,                _______,                                _______,_______,_______,_______,    _______,_______,_______
  ),  
    
  /* 4: SpaceFN
   */
  KEYMAP(
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,            _______,_______,_______,
   KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,    _______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,KC_PGUP,  KC_UP,KC_PGDN,KC_PSCR,KC_SLCK,KC_PAUS, KC_INS,    _______,_______,_______,
  KC_CAPS,_______,_______,_______,_______,_______,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT, KC_END, KC_GRV,        _______,                     
  _______,_______,_______,_______,_______, KC_SPC, KC_END,KC_MUTE,KC_VOLD,KC_VOLU,KC_BSLS,                _______,            KC_PGUP,     
  _______,_______,_______,                _______,                                _______,_______,_______,_______,    KC_HOME,KC_PGDN, KC_END
  ),
 
};

/*
 * Macro definition
 */
enum macro_id {
  DEL_LINE,							// Delete to begin of line
};
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case DEL_LINE:
            return (record->event.pressed ?
                    //MACRO( I(5), T(HOME), T(DELETE), END): MACRO_NONE);
                    MACRO( I(5), SM(), CM(), T(END), D(LSFT), T(HOME), T(DELETE), U(LSFT), RM(), END): MACRO_NONE);
    }
    return MACRO_NONE;
}

/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
*/


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
/*
  switch(keycode) {
    case DEL_LINE:
    if (record->event.pressed){
      SEND_STRING();
      return false;
    }
    break;
  }
*/  
  return true;
}

const uint16_t PROGMEM fn_actions[] = {
  
    [0] = ACTION_MACRO(DEL_LINE),							              // DEL_LINE macro
    [1] = ACTION_MODS_TAP_KEY(MOD_LALT|MOD_LCTL, KC_ESC),   // Esc as ctrl+alt when holded
    [2] = ACTION_LAYER_TAP_KEY(1, KC_TAB),					        // numkey layer
    [3] = ACTION_LAYER_TAP_KEY(2, KC_CAPS),                 // mousekey layer
    [4] = ACTION_LAYER_MODS(3, MOD_LSFT),					          // LShift layer
    [5] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),				        // spaceFN layer	
    
  };


void matrix_init_user(void) {
    
}
    
void matrix_scan_user(void) {
   
}

void led_set_user(uint8_t usb_led) {
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
      // output low
      DDRB |= (1<<7);
      PORTB &= ~(1<<7);
  } else {
      // Hi-Z
      DDRB &= ~(1<<7);
      PORTB &= ~(1<<7);
  }

  if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
      // output low
      DDRD |= (1<<6);
      PORTD &= ~(1<<6);
  } else {
      // Hi-Z
      DDRD &= ~(1<<6);
      PORTD &= ~(1<<6);
  }
}
