#include <stdio.h>

int main() {
    int x;
    int *p;
    printf("Enter an integer: ");
    scanf("%d", &x);
    p = &x;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value via pointer: %d\n", *p);
    return 0;
}

