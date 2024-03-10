@echo off

call qmk json2c ghniman_charybdis.json > keyboards/bastardkb/charybdis/4x6/keymaps/ghniman/keymap.c
call qmk compile -kb bastardkb/charybdis/4x6/v2/splinky_3 -km ghniman
