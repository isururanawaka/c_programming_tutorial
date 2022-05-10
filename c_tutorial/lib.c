//
// Created by Isuru Ranawaka on 5/9/22.
//
#include "lib.h"

int square(int x) {
    return  x*x;
}

int power(int input, int exponent) {
    int total = 1;
    for(int i=0; i<exponent;i++) {
        total *= input;
    }
    return total;
}

void changeValue(int *value) {
    *value = 400;
}