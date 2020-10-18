# WinOS-Kernel
A basic operating system kernel, by me. This will be updated everyday if I have time. This kernel is based on https://github.com/iknowbrain/NIDOS. 

Again, this is a kernel. You could infact boot / test the kernel with qemu-system-i386 -kernel /boot/kernel.bin

The code will be uploaded to here soon. 

## About this kernel

This project is based on https://github.com/iknowbrain/NIDOS and will be updated everytime when I have time coding C :) There is a lot of weird bugs on the kernel, so if you want to contibrute to the project, you can! 

This kernel is made for fun and for educational pusposes only. 

## Tutorials

### How to compile the kernel only. 

***This make file has been fixed to make it possible to compile the ISO file***

To compile the kernel, do **make**. 

Then it will automatically boot a qemu instance, with the kernel running. 

Example of the kernel's shell

![image](https://media.discordapp.net/attachments/722198099132678148/767230622426202132/unknown.png)

The kernel file (only) is located in the folder winos, which is winos/boot/kernel.bin

### How to compile the kernel with the GRUB bootloader

To compile the kernel with the GRUB bootloader as the .iso file. 

Do **make build**. And you will see an iso file in the project directory, 

the file is *winos-release.iso*

Again, this is a fork from the NIDOS kernel operating system project. 
Bug fixed from the original NIDOS project: 
- Fixed GRUB not detecting the kernel file. 
- Fixed .iso compiling 

Have Fun!
