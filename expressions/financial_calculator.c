// Adelle Ponczoch, Financial Calculator C
#include <stdio.h>

// Ask for monthly income (user input)
float income = [10];
// Ask for rent amount (user input)
float rent = [10];
// Ask for utilities expenses (user input)
float utilities = [10];
// Ask for groceries expenses (user input)
float groceries = (input("What is your monthly grocery cost?\n"));
// Ask for transportation expenses (user input)
float transportation = (input("What is your monthly transportation cost?\n"));
// Calculate savings as 10% of income (variable)
float savings = income* 0.1;
// Calculate spending money income - ( rent+ utilities+ groceries+ transportation+ savings) (variable)
float spending = income-(rent+ utilities+ groceries+ transportation+ savings);
// Calculate percent of rent (rent/ income) (variable)
float percent_rent = (rent/ income) *100;
// Calculate percent of utilities (utilities/ income) (variable)
float percent_utilities = (utilities/ income) *100;
// Calculate percent of groceries (groceries/ income) (variable)
float percent_groceries = (groceries/ income) *100;
// Calculate percent of transportation (transportation/ income) (variable)
float percent_transportation = (transportation/ income) *100;
// Calculate percent of spending (spending/income) (variable)
float percent_spending = (spending/income) *100;

int main(void){
    printf("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n");

    return 0;
}