#include <stdio.h>

int Conversao(int f);

int main() {
    int f;

    printf("Fahrenheit para Celsius\n");

    for(f = 50; f <= 150; f++) {
        printf("%d F = %d C\n", f, Conversao(f));
    }

    return 0;
}

int Conversao(int f) {
    int c;

    c = (5 * (f - 32)) / 9;

    return c;
}
