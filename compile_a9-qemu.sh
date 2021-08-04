arm-none-eabi-as -mcpu=cortex-a9 startup.s -o startup.o
arm-none-eabi-gcc -c  -mcpu=cortex-a9 init_a9.c -o init_a9.o
arm-none-eabi-ld -T linker_a9.ld init_a9.o startup.o -o output_a9.elf
arm-none-eabi-objcopy -O binary output_a9.elf  output_a9.bin

mkimage-a9 -A arm -C none -T kernel -a 0x60010000 -e 0x60010000 -d output_a9.bin bare-arm.uimg
#mkimage-a9 -A arm -C none -T kernel -a 0x80008000 -e 0x80008000 -d output_a9.bin bare-arm.uimg

sudo mount sdcard.img tmp
sudo mv bare-arm.uimg tmp/
sudo umount tmp

qemu-system-arm -M vexpress-a9 -nographic -kernel u-boot -sd sdcard.img 
