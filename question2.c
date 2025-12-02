#include <stdio.h>

int max3(int a, int b, int c);

int main() {
    int a, b, c, m;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    m = max3(a, b, c);

    printf("Largest number: %d\n", m);

    return 0;
}

int max3(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

