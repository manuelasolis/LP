#include <stdio.h>

int Inverter(int n);

int main() {
    int n;
    int resultado;

    printf("Digite o numero a ser invertido: ");
    scanf("%d", &n);

    resultado = Inverter(n);

    printf("Numero invertido: %d", resultado);

    return 0;
}

int Inverter(int n) {
    int invertido = 0;
    int digito;

    while(n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    return invertido;
}
