//Adelle Ponczoch, Old Enough C
#include <stdio.h>

int age = 15;

int main(void){
    printf("Welcome to my program. This will tell you if you are old enough to vote, drive, get a learner's permit and go to school.");

    if (age >= 6){
        if (age == 15){
            printf("Congratulations! As a %d year old you can get your learners permit and be in school, but you cannot get your driver's liscense or vote.", age);
        }else if (age >= 18){
            printf("Congratulations! As a %d year old you can vote, get your learner's permit or driver's liscense if you haven't attained them, and attend school.", age);
        }else if (age >= 16){
            printf("Congratulations! As a %d year old you can get your driver's liscense, or learners permit if you haven't gotten that yet. You can attend school, but cannot vote.", age);
        }else{
            printf("Wow! You are %d and can attend school. However, you cannot vote, get your learner's permit or drive.", age);
        }
        }
    else{
        printf("You are still very young and cannot attend school, vote, get a learner's permit or drive.");
    }
    return 0;
}