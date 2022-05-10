//
// Created by Isuru Ranawaka on 5/9/22.
//
#include "stdio.h"

int main () {

    int rows = 3;
    int const columns = 4;

    int studentGrades[][columns] = {
            {1,4,6,7},
            {3,5,6,9,},
            {32,65,7,3}
    };


    for (int i=0;i< rows;i++) {

        for(int j=0; j<columns;j++) {
            printf("%d ",studentGrades[i][j]);
        }
        printf("\n");
    }


    return 0;
}