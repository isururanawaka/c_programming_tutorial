//
// Created by Isuru Ranawaka on 5/9/22.
//

#include <printf.h>

int main() {

    int a = 10;
    double  b = 10.5; // 64 bit

    printf("%lu\n", sizeof(b));

    float  c = 10.5; // 32 bit

    printf("%lu\n", sizeof(c));

    char e[] = "char array";

    printf("%lu\n", sizeof(e));


    //Type casting

    int slices = 17;
    int people = 2;

    double  slicesPerPerson = (double)slices/ people;

    printf("%lf\n",slicesPerPerson);


    double x = 25/2*2.0;

    printf("%f\n",x);

    double  y = (double)25/2* 2.0;

    printf("%f\n",y);

    //Operators

    int d  = 5;
    int f = d++;
    printf("%d\n", d);
    printf("%d\n",f);




    return 0;
}

