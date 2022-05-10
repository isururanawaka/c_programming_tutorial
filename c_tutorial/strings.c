//
// Created by Isuru Ranawaka on 5/9/22.
//
#include "strings.h"
#include "stdio.h"

int main() {
    char  name[20];
    scanf("%19s",name);

    int letter = 0;

    while(name[letter] != '\0') {
        letter++;

    }

    printf("Size of name is %d\n", letter);
    printf("Size of name is %lu\n", strlen(name));

    if (strcmp(name,"Caleb")==0) {
        printf("YOu get access!\n");
    }

    char copy[20];
    strcpy(copy,name);
    printf("Copy of name is; %s\n",copy);

    char lastName[] = " Ranawaka";
    strcat(copy,lastName);
    printf("Name %s \n", copy);





    return 0;
}

