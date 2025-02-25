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
    return;
}

char user(char category[]){
    float cost;
    printf("What is your monthly cost of %s: \n", category);
    scanf("%f", &cost);
    printf("%f\n", cost);
    return cost;
}

int main(void){
    
    printf("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n");

    income = user("income");
    rent = user("rent");
    utilities = user("utilities");
    groceries = user("groceries");
    transportation = user("transportation");

    printf("%f\n", income);
    savings = income* 0.1;

    percent(income, rent, "rent");
    percent(income, utilities, "utilities");
    percent(income, groceries, "groceries");
    percent(income, transportation, "transportation");
    return 0;
}