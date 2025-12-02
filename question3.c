#include <stdio.h>

int isPrime(int n);

int main() {
    int n;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = isPrime(n);

    if (result == 1) printf("Prime\n");
    else printf("Not Prime\n");

    return 0;
}

int isPrime(int n) {
    int i;

    if (n <= 1) return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

