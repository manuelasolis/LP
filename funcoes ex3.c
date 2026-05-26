#include <stdio.h>

int Potencia(int x, int y);

int main() {
    int x, y, resultado;

    printf("Digite a base: ");
    scanf("%d", &x);

    printf("Digite o expoente: ");
    scanf("%d", &y);

    resultado = Potencia(x, y);

    printf("Resultado: %d", resultado);

    return 0;
}

int Potencia(int x, int y) {
    int resultado = 1;

    for(int i = 0; i < y; i++) {
        resultado *= x;
    }

    return resultado;
}
