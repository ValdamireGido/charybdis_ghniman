#!/bin/bash

# qmk json2c ghniman_charybdis.json > keyboards/bastardkb/charybdis/4x6/keymaps/ghniman/keymap.c && {
util/docker_cmd.sh qmk json2c -o keyboards/bastardkb/charybdis/4x6/keymaps/ghniman/keymap.c ghniman_charybdis_4x6.json && {
    echo "=== compiled json keymap to C code"
} || {
    echo "!!! could not compile layout json to C"
    exit 1
}

# qmk compile -kb bastardkb/charybdis/4x6/v2/splinky_3 -km ghniman && {
util/docker_build.sh bastardkb/charybdis/4x6/v2/splinky_3:ghniman && {
    echo "=== compiled firmware"
} || {
    echo "!!! could not compile firmware"
    exit 2
}
