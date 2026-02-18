#!/bin/bash

util/docker_cmd.sh qmk json2c -o keyboards/bastardkb/charybdis/3x6/keymaps/ghniman/keymap.c ghniman_charybdis_3x6.json && {
    echo "=== compiled json keymap to C code"
} || {
    echo "!!! could not compile layout json to C"
    exit 1
}

util/docker_build.sh bastardkb/charybdis/3x6/v2/splinky_3:ghniman && {
    echo "=== compiled firmware"
} || {
    echo "!!! could not compile firmware"
    exit 2
}
