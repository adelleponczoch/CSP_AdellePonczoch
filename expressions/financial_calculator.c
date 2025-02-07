// Adelle Ponczoch, Financial Calculator C
#include <stdio.h>

// Ask for monthly income (user input)
float income;
// Ask for rent amount (user input)
float rent;
// Ask for utilities expenses (user input)
float utilities;
// Ask for groceries expenses (user input)
float groceries;
// Ask for transportation expenses (user input)
float transportation;

int main(void){
    printf("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n");
    printf("%s\n", "What is your monthly income: \n");
    scanf("%s\n", income);
    printf("%s\n", "What is your monthly rent: \n");
    scanf("%s\n", rent);
    printf("%s\n", "What is your monthly utilities cost: \n");
    scanf("%s\n", utilities);
    printf("%s\n", "What is your monthly groceries cost: \n");
    scanf("%s\n", groceries);
    printf("%s\n", "What is your monthly transportation cost: \n");
    scanf("%s\n", transportation);
    return 0;
}