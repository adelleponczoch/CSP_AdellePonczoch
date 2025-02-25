// Adelle Ponczoch, Update of Financial Calculator C
#include <stdio.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;

void percent(float amount, float income, const char* category){
    float percent_category = (amount/ income) *100;
    printf("Each month you spend $%.2f on %s, which is %.2f%% of your monthly income.\n", amount, category, percent_category);
    return;
}

char user(category){
    printf("What is your monthly cost of %s: \n");
    return scanf("%s", &category);
}

int main(void){
    
    printf("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n");

    float income = user("income");
    float rent = user("rent");
    float utilities = user("utilities");
    float groceries = user("groceries");
    float transportation = user("transportation");
    float savings = income* 0.1;

    percent(rent, income, "rent");
    percent(income, utilities, "utilities");
    percent(income, groceries, "groceries");
    percent(income, transportation, "transportation");
    return 0;
}