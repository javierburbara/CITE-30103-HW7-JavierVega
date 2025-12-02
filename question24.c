#include <stdio.h>

int square(int x);

int main() {
    int num;
    int (*fp)(int);
    printf("Enter an integer: ");
    scanf("%d", &num);
    fp = square;
    printf("Square = %d\n", fp(num));
    return 0;
}

int square(int x) {
    return x * x;
}

