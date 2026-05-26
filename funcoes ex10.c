#include <stdio.h>

int ehPrimo(int n);
int nPrimos(int x, int y);

int main() {
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("Quantidade de primos: %d", nPrimos(x, y));

    return 0;
}

int ehPrimo(int n) {
    if(n == 1)
        return 0;

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int nPrimos(int x, int y) {
    int cont = 0;

    for(int i = x + 1; i < y; i++) {
        cont += ehPrimo(i);
    }

    return cont;
}
