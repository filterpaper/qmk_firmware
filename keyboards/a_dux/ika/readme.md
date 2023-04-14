# Ika

Ika is simplified interation of Architeuthis dux with symmetrical split PCBs.

## Keyboard Info

* Keyboard Maintainer: [@filterpaper](https://github.com/filterpaper)
* Hardware Supported: ProMicro controllers, Ika PCB
* Hardware Availability: [Ika PCB](https://github.com/filterpaper/Ika/)

Make example for this keyboard (after setting up your build environment):

    make a_dux/ika:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Keycode in layout**: Press the key mapped to `QK_BOOT` if configured.
* **Bootmagic reset**: Hold down the top left key and plug in the controller.
* **Physical reset pins**: Briefly short the microcontroller's RST and GND pins.

