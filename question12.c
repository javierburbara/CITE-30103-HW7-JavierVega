#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, ok = 1;
    printf("Enter a word: ");
    scanf("%99s", str);
    while (str[i] != '\0') i++;
    j = i - 1;
    i = 0;
    while (i < j) {
        if (str[i] != str[j]) ok = 0;
        i++;
        j--;
    }
    if (ok) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}

