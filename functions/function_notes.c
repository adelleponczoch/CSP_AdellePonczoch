//Adelle Ponczoch, Function Notes in C
#include <stdio.h>

int add(void){
    return 6+8;
}

void add(int numOne, int numTwo){
    printf("%d\n", numOne+numTwo);
}
char input(char type[20]){
    char answer[50];
    printf("Please give me a %s:\n",
    type);
    scanf("%s", answer);
    return answer;
}
int main(void){
    //printf("Hello World\n");
    //add(4,9);
    //add(1000,2);
    //add(47,9);
    //printf("%d", 6+8);
    input("name");
    input("verb");
    input("place");
    printf("%s was %s until they somehow reached %s.", input("name"), input("verb"), input("place"));
    return 0;
}