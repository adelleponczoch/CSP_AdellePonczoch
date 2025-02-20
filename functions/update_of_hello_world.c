//Adelle Ponczoch, Update of Hello World in C
#include <stdio.h>

void welcome(char name[]){
    printf("Hello %s", name);
}

int main(void){
    welcome("Sasha!\n");
    welcome("Paige!\n");
    welcome("Eve!\n");
    welcome("Ali!\n");
    welcome("Julia!\n");
    return 0;
}