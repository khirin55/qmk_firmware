my_awesome_keyboard keyboard firmware
======================

## Quantum MK Firmware

For the full Quantum feature list, see [the parent readme](/).

## Building

Download or clone the whole firmware and navigate to the root folder. Once your dev env is setup, you'll be able to type `make my_awesome_keyboard-default` to generate your .hex - you can then use the Teensy Loader to program your .hex file. 

(Note: replace my_awesome_keyboard with the name of your keyboard.)

Depending on which keymap you would like to use, you will have to compile slightly differently.

### Default

To build with the default keymap, simply run `make my_awesome_keyboard-default`.

### Other Keymaps

Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create a folder with the name of your keymap in the keymaps folder. Create a `readme.md` and a `keymap.c` file to complete your new keymap. When you are done your file tree should look like this:

* `qmk_firmware/`
  * `keyboard/`
    * `keymaps/`
      * `config.h` (optional)
      * `keymap.c`
      * `readme.md`
      * `rules.mk` (optional)

To build the firmware binary hex file with a keymap just do `make` with a keymap like this:

```
$ make my_awesome_keyboard-[default|jack|<name>]
```
