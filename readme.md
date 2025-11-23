So far the code base root is simply the code generate from STM's provided code gen for the B-U585I-IOT02A Discovery kit and an intro to QT based GUI. The RDJ.ioc file is a executable GUI that can configure the device when using the STM32Cube IDE, but we will have manual drivers implemented and should eventually remove the ioc file from the repo. RDJ is a acronym for the 3 main contributers Roger, Derek, and Jazz. 

I modified the FLASH linker script because I'm using GCC 10. Also keep the linker script in "plain text" when using VScode, otherwise the auto formatting while mess up the syntax.

For Windows: 
- through Powershell (admin), wsl.exe
- restart computer
- install Ubuntu
- install make
======== this caused an error, resolved with: ==========
sudo apt update
sudo apt install gcc-arm-none-eabi binutils-arm-none-eabi
========================================================
- run make through root folder