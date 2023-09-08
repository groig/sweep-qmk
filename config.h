// Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>
// SPDX-License-Identifier: GPL-2.0+

#pragma once

// Good defaults for home row modifiers
#define TAPPING_TERM 190
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define LAYER_STATE_8BIT
#define VIAL_KEYBOARD_UID {0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3}

#define VIAL_UNLOCK_COMBO_ROWS { 2, 3, 0, 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1, 0, 2, 4 }
#define VIAL_COMBO_ENTRIES 2
#define COMBO_TERM 50
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
