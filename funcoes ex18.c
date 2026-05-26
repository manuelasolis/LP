#include <stdio.h>

int Soma(int x);

int main() {
    int x;
    int resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    resultado = Soma(x);

    printf("Resultado: %d", resultado);

    return 0;
}

int Soma(int x) {
    int soma = 0;

    for(int i = 1; i <= x; i++) {
        soma += i;
    }

    return soma;
}
