#include <stdio.h>

void Resto13(int x, int y);

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    Resto13(x, y);

    return 0;
}

void Resto13(int x, int y) {
    printf("Numeros encontrados: ");

    for(int i = x; i <= y; i++) {
        if(i % 13 == 5) {
            printf("%d ", i);
        }
    }
}
