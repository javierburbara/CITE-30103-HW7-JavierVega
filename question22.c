#include <stdio.h>

int main() {
    int arr[5], *p, i;
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) scanf("%d", &arr[i]);
    p = arr;
    printf("Values using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) printf("%d ", *(p + i));
    return 0;
}

