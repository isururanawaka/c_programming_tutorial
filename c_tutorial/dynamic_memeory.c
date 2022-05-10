# include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"

void fun() {
    int static x = 0;
    x++;
    printf("%d\n", x);
}

typedef struct user {
    char name[20];
    int age;
    bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified){
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name,name);
    newUser->age = age;
    newUser->isVerified= isVerified;
    return newUser;
}


int main() {

    int size;
    printf("how many int elements u need bro?:");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    if (arr==0){
        printf("Invalid memory management \n");
    }

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("YOur Array:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d  = %d]\n", i, arr[i]);
    }
    free(arr);

    user *me = createUser("Isuru Ranwaka",32,false);
    printf("Isuru is %d years old\n",me->age);
    free(me);
    return 0;
}
