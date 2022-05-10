//
// Created by Isuru Ranawaka on 5/9/22.
//

#include "stdio.h"
#include "stdbool.h"

int main() {

    int age = 17;
    printf("%lu\n", sizeof(age));
    double money = 30000;
    bool isGraduated = true;
    if ((age > 17 && money > 25000) || isGraduated) {
        printf("This is true\n");
    }


    char a = 'b';
    switch (a) {
        case 'a':
            printf("THis is a\n");
            break;
        case 'b':
            printf("This is b\n");
            break;
        default:
            printf("This is default\n");
            break;
    }


    double balance = -5000;
    balance > 0 ? printf("YOu has money\n"): printf("No money yo\n");

    int ages[] = {12,34,67,8,9,12,4,5};
    int calculatedSize =  sizeof (ages)/sizeof(ages[0]);
    for (int i =0; i< calculatedSize; i++) {
        printf("For loop %d\n",i);
    }

    int k = 5;
    while (k< 10){

        printf("While loop %d\n", k);
        k++;
    }

    int j = 10;
    do {
        printf("First iteration\n");
        j++;
    } while (j<=10);

    return 0;
}



