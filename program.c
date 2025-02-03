//Adelle Ponczoch, first program for c
#include <stdio.h>

char name[20];

int main(void){
    printf("Please tell me your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Hello %s!", name);
    return 0;
}