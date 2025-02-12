//Adelle Ponczoch, Silly Sentences C
#include <stdio.h>
#include <string.h>

char name[10];

char animal[15];

char verb[10];

char dessert[15];

char time[10];

int main(void){
    printf("Give me a name: ");
    scanf("%s", name);
    printf("Give me an animal: ");
    scanf("%s", animal);
    printf("Give me a present tense verb: ");
    scanf("%s", verb);
    printf("Give me a dessert: ");
    scanf("%s", dessert);
    printf("Give me a time of day: ");
    scanf("%s", time);
    
    printf("Every day, %s the %s would %s for hours, or at least until their daily %s gorge at %s.", name, animal, verb, dessert, time);
    return 0;
}