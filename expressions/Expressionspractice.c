//Adelle Ponczoch, Expressions Practice C
#include <stdio.h>
#include <math.h>

int equation1 = 7-24/8*4+6;
int equation2 = 18/3-7+2*5;
int equation3 = 6*4/12+72/8-9;
int equation4 = (17-6/2)+4*3;
int equation5 = -2*(1*4-2/2)+(6+2-3);
int equation6 = -1*((3-4*7)/5)-2*24/6;
int equation7 = (3*(int) pow(5,2)/15)-(5-(int) pow(2,2));
int equation8 = ((int) pow(1,4) *(int) pow(2,2) +(int) pow(3,3))-(int) pow(2,5) /4;
int equation9 = (int) pow((22/2-2*5),2) + (int) pow((4-6/6),2);

int main(void){
    printf("%d\n", equation1);
    printf("%d\n", equation2);
    printf("%d\n", equation3);
    printf("%d\n", equation4);
    printf("%d\n", equation5);
    printf("%d\n", equation6);
    printf("%d\n", equation7);
    printf("%d\n", equation8);
    printf("%d\n", equation9);
    return 0;
}
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

    // tell user category spending amount AND percent for rent("You spend $XX.XX on rent and that is XX% of your income.") (print)
    printf("Each month you spend ${rent%.2f} on rent, which is {percent_rent%.2f}% of your monthly income.");
    // tell user category spending amount AND percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income.") (print)
    printf("Each month you spend ${utilities%.2f} on utilities, which is {percent_utilities%.2f}% of your monthly income.");
    // tell user category spending amount AND percent for groceries ("You spend $XX.XX on groceries and that is XX% of your income.") (print)
    printf("Each month you spend ${groceries%.2f} on groceries, which is {percent_groceries%.2f}% of your monthly income.");
    // tell user category spending amount AND percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income.") (print)
    printf("Each month you spend ${transportation%.2f} on transportation, which is {percent_transportation%.2f}% of your monthly income.");
    // tell user category spending amount AND percent for spending ("You spend $XX.XX on spending and that is XX% of your income.") (print)
    printf("Each month you spend ${spending%.2f} on spending, which is {percent_spending%.2f}% of your monthly income.");
    // tell user category spending amount AND percent for savings ("You spend $XX.XX on savings and that is 10% of your income.") (print)
    printf("Each month you spend ${savings%.2f} on savings, which is 10% of your monthly income.");