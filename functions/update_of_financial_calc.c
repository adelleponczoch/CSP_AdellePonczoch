// Adelle Ponczoch, Update of Financial Calculator C
#include <stdio.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;

void percent(float amount, float income, char category[]){
    float percent_category = (amount/ income) *100;
    printf("Each month you spend $%.2f on %s, which is %.2f%% of your monthly income.\n", amount, category, percent_category);
    printf("Each month you spend $%.2f on savings, which is 10%% of your monthly income.\n", savings);
    printf("Each month you have $%.2f extra for spending, which is %.2f%% of your monthly income.\n", spending, percent_spending);
    return;
}

float user(char category[]){
    float cost;
    printf("What is your monthly %s: \n", category);
    scanf("%f", &cost);
    return cost;
}

int main(void){
    
    printf("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n");

    income = user("income");
    rent = user("rent");
    utilities = user("utilities");
    groceries = user("groceries");
    transportation = user("transportation");

    savings = income* 0.1;

    percent(rent, income, "rent");
    percent(utilities, income, "utilities");
    percent(groceries, income, "groceries");
    percent(transportation, income, "transportation");

    return 0;
}