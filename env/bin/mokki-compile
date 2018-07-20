#!/bin/sh
rm a.bin a.out
MOKKI_DIR='/home/konrad/Workspace/arm-side-loaded-program/mokki/'
OPTS='-nostdlib -lnosys -fPIE -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -c -O2'

arm-none-eabi-gcc $OPTS main.c -I$MOKKI_DIR 
arm-none-eabi-gcc $OPTS $MOKKI_DIR/start.s

arm-none-eabi-ld -T $MOKKI_DIR/lscript.ld start.o main.o 

arm-none-eabi-objcopy -O binary a.out a.bin
echo "Size of binary:"
wc -c a.out
wc -c a.bin
arm-none-eabi-objdump -d a.out
arm-none-eabi-objdump -t a.out
