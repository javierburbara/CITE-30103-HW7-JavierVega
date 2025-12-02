#include <stdio.h>

int main() {
    int arr[5], i, temp;
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) scanf("%d", &arr[i]);
    for (i = 0; i < 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

