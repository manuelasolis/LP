#include <stdio.h>

int fatorial(int n);
int combinacoes(int n, int r);

int main() {
    int n, r;
    int resultado;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Digite r: ");
    scanf("%d", &r);

    resultado = combinacoes(n, r);

    printf("Combinacoes: %d", resultado);

    return 0;
}

int fatorial(int n) {
    int fat = 1;

    for(int i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int combinacoes(int n, int r) {
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}
