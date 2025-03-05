//Adelle Ponczoch, Loops Notes in C
#include <stdio.h>

int main(void){
    //What is a loop? 
        // a section of code that repeats
    //What are the two types of loops?
        //for loops
        int x;
        for(x=0; x<10; x++){
            printf("Hello");
        }
        //while loops
        int i=1;
        while(i<10){
            printf("%d\n", i);
            i++;
        }
    //What is iteration
        //the act of repeating (a specific time through the loop])
    //What are lists? (called arrays in c)
        //many values in the same variable
    //How do you make lists in C?
        int grades[] = {97, 95, 100, 70, 94, 98, 64};
        // in the brackets we say how long the list is going to be, but don't need it if you set the list right there
        // data type is whatever is in the list, all have to be the same data type
        // list is surrounded by curly brackets with commas between each items
        printf("%d\n", grades[3]); //we put the index number in the brackets when we print
        grades[2] = 73; //update one at a time
        printf("%d\n", grades[2]);
        // How to get the size of an array (list)
        //printf("%lu", sizeof(grades));//gives number of bytes that the list takes
        int length = sizeof(grades)/sizeof(grades[0]);
        printf("%d\n", length);
    //How do you make for loops in C? //iterators should be x or i
        int t; 
        //in parentheses 1. starting point 2. go until point 3. what we count by
        for(t=0; t<10; t+=2){
            printf("%d\n", t);
        }
        int l;
        for(l=0; l<length; l++){
            printf("%d\n", grades[l]);
        }
    //How do you make while loops in C?
    // use iterator to se start point
    // while line sets the stop point
    // last line set what you count by
        int iterator = 100;
        while(iterator >= 0){
            printf("%d\n", iterator);
            iterator -= 10;
        }
        char movies[][20] = {"Cinderella", "The Smurf Movie", "Transformers", "Cars", "Up", "1984"};
        int mlength = sizeof(movies)/sizeof(movies[0]);
        int m = 0;
        while(m<mlength){
            printf("%s\n", movies[m]);
            m++;
        }

    return 0;
}