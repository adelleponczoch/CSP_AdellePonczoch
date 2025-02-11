//Adelle Ponczoch, Name Decorator for C
#include <stdio.h>
#include <string.h>

char name[20];

int main(void){
    printf("What is your name: \n");
    scanf("%s", name);
    char one[] = "<<<";
    char three[] = ">>>";
    printf("%s", one);
    strcat(one, name);
    printf("%s", name);
    strcat(name, three);
    printf("%s", three);
    return 0;
}