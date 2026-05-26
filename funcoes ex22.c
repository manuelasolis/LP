#include <stdio.h>

int MenorInteiro(int x);

int main() {
    int x;
    int resultado;

    printf("Digite o valor: ");
    scanf("%d", &x);

    resultado = MenorInteiro(x);

    printf("Resposta: %d", resultado);

    return 0;
}

int MenorInteiro(int x) {
    for(int i = 1; ; i++) {
        if(i * i > x) {
            return i;
        }
    }
}
