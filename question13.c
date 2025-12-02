#include <stdio.h>

int main() {
    char text[101];
    int i = 0, v = 0, c = 0, d = 0;
    char ch;
    printf("Enter a line: ");
    scanf(" %100[^\n]", text);
    while (text[i] != '\0') {
        ch = text[i];
        if (ch >= '0' && ch <= '9') d++;
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else c++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\n", v, c, d);
    return 0;
}

