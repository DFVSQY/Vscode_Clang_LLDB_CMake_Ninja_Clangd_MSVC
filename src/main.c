#include "c_math.h"
#include <stdio.h>

int main() {
    printf("hello world\n");

    int a = 10, b = 30;
    int c = add(a, b);
    int d = sub(a, b);
    printf("c:%d d:%d\n", c, d);

    return 0;
}