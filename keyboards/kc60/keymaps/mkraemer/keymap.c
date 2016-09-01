#include "kc60.h"
#include "keymap_german.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _DE_COMM 0
#define _DE_DOT 1
#define COMM M(_DE_COMM)
#define DOT M(_DE_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Standard-ish QWERTZ
   * ,-----------------------------------------------------------.
   * | ^ | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ß| ´ | Backsp |
   * |-----------------------------------------------------------|
   * |Tab  | Q | W | E | R | T | Z | U | U | O | P | Ü | + |  #  |
   * |-----------------------------------------------------------|
   * |Esc/FN | A | S | D | F | G | H | J | K | L | Ö | Ä |Return |
   * |-----------------------------------------------------------|
   * |        | Y | X | C | V | B | N | M | , | . | - |          |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space/WM         |Alt |Gui |Ctrl| FN1 |
   * `-----------------------------------------------------------'
   */
  [0] = KEYMAP(
      DE_CIRC, KC_1   , KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0 , DE_SS  , DE_ACUT, KC_BSPC, \
      KC_TAB , KC_Q   , KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O, KC_P , DE_UE  , DE_PLUS, DE_HASH, \
      KC_FN0 , KC_A   , KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, DE_OE, DE_AE  , XXXXXXX, KC_ENT , \
      KC_LSFT, XXXXXXX, DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, COMM, DOT  , DE_MINS, XXXXXXX, XXXXXXX, \
      KC_LCTL      , KC_LGUI, KC_LALT,         LT(5,KC_SPC),          KC_RALT, KC_RGUI, KC_RCTL, DF(2)    \
      ),

  /*
   * ,-----------------------------------------------------------.
   * |Bl | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |
   * |-----------------------------------------------------------|
   * |     |   |MUP|   |   |   |   | M1| M3| M2|   |   |   |     |
   * |-----------------------------------------------------------|
   * |       |MLT|MDW|MRT|   |   |LFT|DWN| UP|RGT|   |   |       |
   * |-----------------------------------------------------------|
   * |        |   |   |   | V-| V+|MTE|   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |      Space            |DBG |RST |    |     |
   * `-----------------------------------------------------------'
   */
  [1] = KEYMAP(
      BL_STEP, KC_F1     , KC_F2     , KC_F3      , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9   , KC_F10 , KC_F11 , KC_F12 , KC_DEL , \
      _______, _______   , KC_MS_UP  , _______    , _______, _______, _______, KC_BTN1, KC_BTN3, KC_BTN2 , _______, _______, _______, _______, \
      _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT, _______, _______, _______, _______, \
      _______, _______   , _______   , _______    , _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______ , _______, _______, _______, _______, \
      _______,  _______,  _______,                                 KC_SPC,                                   DEBUG,   RESET, _______, _______  \
      ),

  /* ADNW-inspired
   * ,-----------------------------------------------------------.
   * | ^ | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ß|   | Backsp |
   * |-----------------------------------------------------------|
   * |Tab  | K | U | Ü | . | Ä | V | G | C | L | J | F |   |     |
   * |-----------------------------------------------------------|
   * |       | H | I | E | A | O | D | T | R | S | ß |   |Return |
   * |-----------------------------------------------------------|
   * |Shift   | X | Y | Ö | , | Q | B | P | W | M | Z |    Shift |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |Gui |Ctrl| FN0 |
   * `-----------------------------------------------------------'
   */
  [2] = KEYMAP(
      DE_CIRC, KC_1   , KC_2   , KC_3 , KC_4   , KC_5   , KC_6   , KC_7   , KC_8      , KC_9, KC_0, DE_MINS, XXXXXXX, KC_BSPC, \
      KC_TAB , DE_K   , DE_U   , DE_UE, KC_DOT , DE_AE  , DE_V   , DE_G   , DE_C      , DE_L, DE_J, DE_F   , XXXXXXX, XXXXXXX, \
      LT(4   , KC_ESC), DE_H   , DE_I , DE_E   , DE_A   , DE_O   , DE_D   , DE_T      , DE_R, DE_N, DE_S   , DE_SS  , XXXXXXX, LT(4, KC_ENT), \
      MO(3)  , XXXXXXX, DE_X   , DE_Y , DE_OE  , KC_COMM, DE_Q   , DE_B   , DE_P      , DE_W, DE_M, DE_Z   , XXXXXXX, MO(3)  , \
      KC_LCTL, KC_LGUI, KC_LALT,                          LT(5 , KC_SPC),                  KC_RALT, KC_RGUI, KC_RCTL, DF(0)    \
      ),

  /* ADNW-inspired shift
   * ,-----------------------------------------------------------.
   * | ^ | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ß|   | Backsp |
   * |-----------------------------------------------------------|
   * |Tab  | K | U | Ü | . | Ä | V | G | C | L | J | F |   |     |
   * |-----------------------------------------------------------|
   * |       | H | I | E | A | O | D | T | R | S | ß |   |Return |
   * |-----------------------------------------------------------|
   * |Shift   | X | Y | Ö | , | Q | B | P | W | M | Z |    Shift |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |Gui |Ctrl| FN0 |
   * `-----------------------------------------------------------'
   */
  [3] = KEYMAP(
      DE_CIRC, S(DE_CIRC), S(KC_3), XXXXXXX , UC(0x00bb), UC(0x00ab), S(KC_4), DE_EURO, UC(0x201E), UC(0x201c), _______, UC(0x2014), DE_ACUT, KC_BSPC, \
      KC_TAB , S(DE_K)   , S(DE_U), S(DE_UE), KC_DOT    , S(DE_AE)  , S(DE_V), S(DE_G), S(DE_C)   , S(DE_L)   , S(DE_J), S(DE_F)   , XXXXXXX, XXXXXXX, \
      _______, S(DE_H)   , S(DE_I), S(DE_E) , S(DE_A)   , S(DE_O)   , S(DE_D), S(DE_T), S(DE_R)   , S(DE_N)   , S(DE_S), UC(0x1e9e), XXXXXXX, _______, \
      _______, XXXXXXX   , S(DE_X), S(DE_Y) , S(DE_OE)  , DE_MINS   , S(DE_Q), S(DE_B), S(DE_P)   , S(DE_W)   , S(DE_M), S(DE_Z)   , XXXXXXX, _______, \
      _______,_______,_______,                            KC_SPC,                       _______,_______,_______, _______    \
      ),

  /* ADNW-inspired meta
   * ,-----------------------------------------------------------.
   * | ^ | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ß|   | Backsp |
   * |-----------------------------------------------------------|
   * |Tab  | K | U | Ü | . | Ä | V | G | C | L | J | F |   |     |
   * |-----------------------------------------------------------|
   * |       | H | I | E | A | O | D | T | R | S | ß |   |Return |
   * |-----------------------------------------------------------|
   * |Shift   | X | Y | Ö | , | Q | B | P | W | M | Z |    Shift |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |Gui |Ctrl| FN0 |
   * `-----------------------------------------------------------'
   */
  [4] = KEYMAP(
      _______, _______     , _______   , _______, _______, _______   , _______, _______, _______, _______, _______, _______, _______, KC_BSPC, \
      _______, RALT(KC_DOT), S(DE_MINS), DE_LBRC, DE_RBRC, DE_CIRC   , DE_EXLM, DE_LESS, DE_MORE, DE_EQL , DE_AMPR, _______, _______, XXXXXXX, \
      _______, DE_BSLS     , S(KC_7)   , DE_LCBR, DE_RCBR, S(DE_PLUS), DE_QST , DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT  , XXXXXXX, _______, \
      _______, XXXXXXX     , DE_HASH   , DE_DLR , DE_PIPE  , DE_TILD, XXXXXXX, DE_PLUS, DE_PERC, DE_DQOT, DE_QUOT,  DE_SCLN, XXXXXXX, _______, \
      _______, _______, KC_LALT,                            KC_SPC,                       KC_RALT, KC_RGUI, KC_RCTL, _______    \
      ),
  /*
   * ,-----------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |
   * |-----------------------------------------------------------|
   * |     |   |MUP|   |   |   |   | M1| M3| M2|   |   |   |     |
   * |-----------------------------------------------------------|
   * |       |MLT|MDW|MRT|   |   |LFT|DWN| UP|RGT|   |   |       |
   * |-----------------------------------------------------------|
   * |        |   |   |   | V-| V+|MTE|   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |      Space            |DBG |RST |    |     |
   * `-----------------------------------------------------------'
   */
  [5] = KEYMAP(
      _______, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), _______, _______, _______, _______, \
      _______, LALT(KC_J), LGUI(KC_K), LALT(KC_K), _______   , _______   , _______   , _______   , _______   , _______   , _______, _______, _______, _______, \
      _______, LGUI(KC_H), LGUI(KC_J), LGUI(KC_L), _______   , _______   , _______   , _______   , _______   , _______   , _______, _______, _______, LGUI(KC_ENT), \
      _______, _______   , _______   , _______   , _______   , _______   , _______   , _______   , _______   , _______   , _______, _______, _______, _______, \
      _______, _______   , _______   ,                      _______                                             , _______   , _______   , _______   , _______  \
      ),
};

const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_TAP_KEY(1, KC_ESC),  // Layer 1 when hold, esc when tapped
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (!record->event.pressed) {
        return MACRO_NONE;
    }

    switch (id) {
        case _DE_COMM: // comma or angled bracket open
            if ((keyboard_report->mods & (MOD_BIT(KC_LCTRL))) != 0) {
                // replace ctrl + comma with angle bracket open
                unregister_code(KC_LCTRL);
                register_code(DE_LESS);
                unregister_code(DE_LESS);
                register_code(KC_LCTRL);
            } else {
                register_code(DE_COMM);
                unregister_code(DE_COMM);
            }
            break;

        case _DE_DOT: // dot or angled bracket close
            if ((keyboard_report->mods & (MOD_BIT(KC_LCTRL))) != 0) {
                // replace ctrl + dot with angle bracket close
                unregister_code(KC_LCTRL);
                register_code(KC_LSFT);
                register_code(DE_LESS);
                unregister_code(DE_LESS);
                unregister_code(KC_LSFT);
                register_code(KC_LCTRL);
            } else {
                register_code(DE_DOT);
                unregister_code(DE_DOT);
            }
            break;
    }

    return MACRO_NONE;
};

void matrix_init_user(void) {
  set_unicode_input_mode(UC_LNX);
};
