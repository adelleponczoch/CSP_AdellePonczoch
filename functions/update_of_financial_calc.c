// Adelle Ponczoch, Update of Financial Calculator C
#include <stdio.h>
#include <math.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;

float info(float income, float type, float amount){
    float percent_type = (amount/ income) *100;
    printf("Each month you spend $%.2f on %s, which is %.2f%% of your monthly income.\n", amount, type, percent_type);
    return 0;
}

float user(type){
    return input ("What is your monthly cost of %s?\n", type);
}

int main(void){
    printf("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n");
    
    char income = user("income");
    char rent = user("rent");
    char utilities = user("utilities");
    char groceries = user("groceries");
    char transportation = user("transportation");
    char savings = income* 0.1;
    
    char info(income, rent, "rent");
    char info(income, utilities, "utilities");
    char info(income, groceries, "groceries");
    char info(income, transportation, "transportation");
    
    // Calculate savings as 10% of income
    float savings = income* 0.1;
}