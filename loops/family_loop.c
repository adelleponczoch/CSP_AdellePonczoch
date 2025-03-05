//Adelle Ponczoch, Family Loop in C
#include <stdio.h>

int main(void){
    char siblings[][20] = {"Vienna", "Grace", "Jacob", "Seth", "Adelle", "Miriam"};
        int mlength = sizeof(movies)/sizeof(movies[0]);
        int m = 0;
        while(m<mlength){
            printf("%s\n", movies[m]);
            m++;
        }
    return 0;
}