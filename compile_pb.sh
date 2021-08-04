../arm-gcc/bin/arm-none-eabi-as -mcpu=arm926ej-s startup.s -o startup.o
../arm-gcc/bin/arm-none-eabi-gcc -c  -mcpu=arm926ej-s init.c -o init.o
../arm-gcc/bin/arm-none-eabi-ld -T linker.ld init.o startup.o -o output_pb.elf
../arm-gcc/bin/arm-none-eabi-objcopy -O binary output_pb.elf  output_pb.bin
