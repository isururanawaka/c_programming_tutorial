//
// Created by Isuru Ranawaka on 5/9/22.
//
#include "stdio.h"
#include "strings.h"
#include "lib.h"



int main() {

    int x = 5;
    int y = power(x,6);
    changeValue(&x);
    printf("%d\n",x);
    return 0;
}


