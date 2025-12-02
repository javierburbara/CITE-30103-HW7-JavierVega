#include <stdio.h>

float toCelsius(float f);

int main() {
    float f, c;
    scanf("%f", &f);
    c = toCelsius(f);
    printf("%.2f\n", c);
    return 0;
}

float toCelsius(float f) {
    float c;
    c = (f - 32.0f) * 5.0f / 9.0f;
    return c;
}

