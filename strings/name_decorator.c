//Adelle Ponczoch, Name Decorator for C
#include <stdio.h>

char name[20];

int main(void){
    char one[] = "<<<";
    char two[] = name;
    char three[] = ">>> ";
    printf("%s\n", one);
    strcat(one, two);
    printf("%s\n", one);
    strcat(one, two, three);
    printf("%s", three);
    return 0;
}