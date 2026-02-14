#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    int **pp;

    p = &x;     // pointer to x
    pp = &p;    // pointer to pointer

    printf("Value of x = %d\n", x);
    printf("Value using pointer p = %d\n", *p);
    printf("Value using pointer to pointer pp = %d\n", **pp);

    return 0;
}