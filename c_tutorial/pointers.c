#include "stdio.h"

int main() {

    int a  = 100;
    int *b =  &a;

    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",&a);

    int x = 5;
    b = &x;
    printf("%d\n",*b);
    printf("%d\n",a);

    return 0;
}


