//Adelle Ponczoch, Family Loop in C
#include <stdio.h>

int main(void){
    char siblings[][20] = {"Vienna", "Grace", "Jacob", "Seth", "Adelle", "Miriam", "Isaac", "Cyrus"};
        int length = sizeof(siblings)/sizeof(siblings[0]);
        int s = 0;
        while(s<length){
            printf("Hello %s\n", siblings[s]);
            s++;
        }
    return 0;
}