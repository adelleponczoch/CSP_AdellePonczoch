//Adelle Ponczoch, Update of Hello World in C
#include <stdio.h>

char name[20];

int main(void){
    printf("Please tell me your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello %s!", name);

name();
name();
name();
name();

    return 0;
}