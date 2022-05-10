# include "stdio.h"

struct rectangle {
    int length;
    int width;
};

int main() {

    struct rectangle rectangle = {5,10};
    printf("Length: %d Width: %d\n", rectangle.length, rectangle.width);
    return 0;
}

