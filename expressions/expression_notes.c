//Adelle Ponczoch, Expressions Notes C
#include <stdio.h>
#include <math.h> //this lets us do exponents

// integers int when we set the variable and %d when we print
// floats float when we set the variable and %f when we print
// strings (words) char when we set the variable and %s when we print
int mynum;
float percent;
int add = 4+6;
int sub = 4-6;
int mul = 4*6;
float div = 6/4;
int mod = 6%4;
float ex = pow( 5, 2);

int main(void){
    //printf("Type a number: \n");
    //scanf("%d", &mynum);
    //printf("You inputed %d\n", mynum);
    //printf("Give me a percent as a decimal: \n");
    //scanf("%f", &percent);
    //printf("Your percent is %f\n", percent);
    printf("%d\n", add);
    printf("%d\n", sub);
    printf("%d\n", mul);
    mul = 7*4; //this is for reassigning the variable, which has to be in the main
    printf("%.2f\n", div); //the .2 after the % shows the computer how many decimal points I want
    printf("%d\n", mod);
    printf("%f\n", ex);
    printf("%d\n", mul);

    return 0;
}