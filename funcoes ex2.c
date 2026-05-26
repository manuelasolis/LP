#include <stdio.h>

int Divisao(int, int);

int main() {
    int a, b, resultado;

    printf("Digite o valor 1: ");
    scanf("%d", &a);

    printf("Digite o valor 2: ");
    scanf("%d", &b);

    resultado = Divisao(a, b);

    printf("Resultado: %d", resultado);

    return 0;
}

int Divisao(int a, int b) {
    int valor = a;
    int contador = 0;

    while(valor >= b) {
        valor -= b;
        contador++;
    }

    return contador;
}
