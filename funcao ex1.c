#include <stdio.h>

int Multiplicacao(int, int);

int main() {
    int a, b, resultado;

    printf("Digite o valor 1: ");
    scanf("%d", &a);

    printf("Digite o valor 2: ");
    scanf("%d", &b);

    resultado = Multiplicacao(a, b);

    printf("Resultado: %d", resultado);

    return 0;
}

int Multiplicacao(int a, int b) {
    int soma = 0;

    for(int i = 0; i < b; i++) {
        soma += a;
    }

    return soma;
}
