#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    float avg;
    int *p;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        sum += p[i];
    }
    avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
    free(p);
    return 0;
}

