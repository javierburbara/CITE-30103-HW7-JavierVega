#include <stdio.h>

long factorial(int n);

int main() {
    int n;
    long f;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0) printf("Error: negative number\n");
    else {
        f = factorial(n);
        printf("%d! = %ld\n", n, f);
    }
    return 0;
}

long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

