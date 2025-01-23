

## MAJOR UPDATE ##
I am struggling on how to use rust and deal with usb devices properly. Documentation kinda sucks, so I will be switching over to C++, which has a better way into the linux kernel and better documentation when it comes to gamepad inputs

This was originally written in rust, so things will be transfered over, keeping credits for while I was in rust as it still gave me a starting ground

## Project Introduction ##
This will be my project for CS Projects

GHRBLinux will be developed in ~Rust~ C++

## Functions ##

* Take input from a wired ION Drum Rocker for the WII
* Give the computer gamepad instructions for said controllers

## Use ##

* This will be used for me to be able to play [Clone Hero](https://www.clonehero.net) on my linux laptop with my rock band drumset, making sure everything works properly
* The device works in a really weird way, which causes it to be a really annoying device to debug and use in games where I set the controls myself. This will ensure that the device works and anyone who somehow has the same controller as me can
play on linux

## Potential Future Functions ##
* Reimplement the GH5/BH Wireless xbox 360 guitar controller

## Credits ##

[StarAssassin64](https://github.com/starassassin64) - Creator of project

[Paroj](https://github.com/paroj) - Creator of [XPAD](https://github.com/paroj/xpad) (The standard kernal driver for xbox related controllers written in C)

[abstrakraft](https://github.com/abstrakraft) - Creator of [cwiid](https://github.com/abstrakraft/cwiid) (A driver made to handle Wii HID's)

[a1ien](https://github.com/a1ien) - Creator of [rusb](https://github.com/a1ien/rusb) (One of the crates I will be using)
