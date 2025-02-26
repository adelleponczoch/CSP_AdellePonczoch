// Adelle Ponczoch, Update of Financial Calculator in C
#include <stdio.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;
float spending;

void percent(float amount, float income, char category[]){
    float percent_category = (amount/ income) *100;
    printf("Each month you spend $%.2f on %s, which is %.2f%% of your monthly income.\n", amount, category, percent_category);
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
    spending = income - (rent+utilities+groceries+transportation+savings);
    float spend_percent = spending/income *100;

    percent(rent, income, "rent");
    percent(utilities, income, "utilities");
    percent(groceries, income, "groceries");
    percent(transportation, income, "transportation");

    printf("You have $%.2f for savings which is 10%% of your total income.\n", savings);
    printf("You have $%.2f left for spending which is %.2f%% of your total income\n", spending, spend_percent);
    return 0;
}