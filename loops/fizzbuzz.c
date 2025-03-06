//Adelle Ponczoch, FizzBuzz C
#include <stdio.h>

int x;

int main(void){
    for(x =0; x <51; x++){
        if(x%5 == 0 && x%3 == 0){
            printf("FizzBuzz\n");
            }
        else if(x%5 == 0){
            printf("Buzz\n");
            }
        else if(x%3 == 0){
            printf("Fizz\n");
        }else{
            printf("%d\n", x);
            }
        }
    return 0;
}