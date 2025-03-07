@echo off

call qmk json2c ghniman_charybdis.json > keyboards/bastardkb/charybdis/4x6/keymaps/ghniman/keymap.c && (
    echo === compiled json keymap to C code
) || (
    echo !!! could not compile layout json to C
    EXIT 1
)

call qmk compile -kb bastardkb/charybdis/4x6/v2/splinky_3 -km ghniman && (
    echo === compiled firmware
) || (
    echo !!! could not compile firmware
    EXIT 2
)

