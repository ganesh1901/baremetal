#include <stdio.h>

volatile unsigned int * const UART0_PTR = (unsigned int *)0x0101f1000;
void display(const char *string){
    while(*string != '\0'){
        *UART0_PTR = *string;
        string++;
    }
}
 
int my_init(){

    display("\n\n ############# Hello Open World ################ \n");
   
}
