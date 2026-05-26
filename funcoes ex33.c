#include <stdio.h>

void Divisores(int n);

int main() {
    int n;

    printf("Digite o numero a ser avaliado: ");
    scanf("%d", &n);

    Divisores(n);

    return 0;
}

void Divisores(int n) {
    printf("Divisores encontrados: ");

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
