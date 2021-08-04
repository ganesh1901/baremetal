#include <stdint.h>
volatile uint8_t* uart0 = (uint8_t*)0x10009000;
void display1(const char *string){
    //volatile uint8_t* uart0 = (uint8_t*)0x02020000;
    while(*string != '\0'){
        *uart0 = *string;
        string++;
    }
}

#if 0
void display2(const char *string){
    volatile uint8_t* uart0 = (uint8_t*)0x021e8000;
    while(*string != '\0'){
        *uart0 = *string;
        string++;
    }
}
void display3(const char *string){
    volatile uint8_t* uart0 = (uint8_t*)0x021ec000;
    while(*string != '\0'){
        *uart0 = *string;
        string++;
    }
}


void display4(const char *string){
    volatile uint8_t* uart0 = (uint8_t*)0x021f0000;
    while(*string != '\0'){
        *uart0 = *string;
        string++;
    }
}

void display5(const char *string){
    volatile uint8_t* uart0 = (uint8_t*)0x021f4000;
    while(*string != '\0'){
        *uart0 = *string;
        string++;
    }
}


#endif
int my_init(){

     //printf(" hello gansh \n");
    display1("\n\n ############# Hello Open World  VEXPRESS-A9 1 ################ \n");

#if 0
    display2("\n\n ############# Hello Open World  VEXPRESS-A9 2################ \n");
    display3("\n\n ############# Hello Open World  VEXPRESS-A9 3################ \n");
    display4("\n\n ############# Hello Open World  VEXPRESS-A9 4################ \n");
    display5("\n\n ############# Hello Open World  VEXPRESS-A9 5################ \n");
#endif
   
}
