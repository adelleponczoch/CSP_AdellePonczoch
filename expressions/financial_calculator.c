// Adelle Ponczoch, Financial Calculator C
#include <stdio.h>
#include <math.h>

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
    printf("%f\n", "What is your monthly income: \n");
    scanf("%f\n", &income);
    printf("%f\n", "What is your monthly rent: \n");
    scanf("%f\n", &rent);
    printf("%f\n", "What is your monthly utilities cost: \n");
    scanf("%f\n", &utilities);
    printf("%f\n", "What is your monthly groceries cost: \n");
    scanf("%f\n", &groceries);
    printf("%f\n", "What is your monthly transportation cost: \n");
    scanf("%f\n", &transportation);

    // Calculate savings as 10% of income (variable)
    float savings = income* 0.1;
    // Calculate spending money income - ( rent+ utilities+ groceries+ transportation+ savings) (variable)
    float spending = income -(rent+ utilities+ groceries+ transportation+ savings);
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
    
    // tell user category spending amount AND percent for rent("You spend $XX.XX on rent and that is XX% of your income.") (print)
    printf("Each month you spend $%.2f on rent, which is %.2f% of your monthly income.\n", rent, percent_rent);
    // tell user category spending amount AND percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income.") (print)
    printf("Each month you spend $%.2f on utilities, which is %.2f% of your monthly income.\n", utilities, percent_utilities);
    // tell user category spending amount AND percent for groceries ("You spend $XX.XX on groceries and that is XX% of your income.") (print)
    printf("Each month you spend $%.2f on groceries, which is %.2f% of your monthly income.\n", groceries, percent_groceries);
    // tell user category spending amount AND percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income.") (print)
    printf("Each month you spend $%.2f on transportation, which is %.2f% of your monthly income.\n", transportation, percent_transportation);
    // tell user category spending amount AND percent for spending ("You spend $XX.XX on spending and that is XX% of your income.") (print)
    printf("Each month you spend $%.2f on spending, which is %.2f% of your monthly income.\n", spending, percent_spending);
    // tell user category spending amount AND percent for savings ("You spend $XX.XX on savings and that is 10% of your income.") (print)
    printf("Each month you spend $%.2f on savings, which is 10% of your monthly income.\n", savings);
    return 0;
}