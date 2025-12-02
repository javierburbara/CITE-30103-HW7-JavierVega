#include <stdio.h>

int main() {
    char text[101];
    int i = 0, words = 0, inside = 0;
    printf("Enter a sentence: ");
    scanf(" %100[^\n]", text);
    while (text[i] != '\0') {
        if (text[i] != ' ') {
            if (!inside) {
                inside = 1;
                words++;
            }
        } else inside = 0;
        i++;
    }
    printf("Words: %d\n", words);
    return 0;
}

