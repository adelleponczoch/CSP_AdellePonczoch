//Adelle Ponczoch, Conditional Notes C
#include <stdio.h>
#include <string.h>

char name[] = "Vienna";
int num = 7;

int main(void){
    if(strcmp(name, "Vienna") == 0){
        printf("Hello Ms. LaRose. Welcome to class.\n");
    }else{
        printf("Hello %s, welcome to class!\n", name);
    }
// && = and
// || = or
// != = not
    if(num > 5 && num < 10){
        if(num == 7){
            printf("%d is an unlucky number.\n", num);
        }else{
            printf("%d is a large single digit number\n", num);
        }
    }else if (num >10){
        printf("%d is not a single digit number\n", num);
    }else{
        printf("%d is a small single digit number'n", num);
    }
    return 0;
}