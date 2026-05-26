#include <stdio.h>

int tipoTriangulo(int a, int b, int c);

int main() {
    int a, b, c;
    int resultado;

    printf("Digite os tres lados: ");
    scanf("%d %d %d", &a, &b, &c);

    resultado = tipoTriangulo(a, b, c);

    printf("Resultado: %d", resultado);

    return 0;
}

int tipoTriangulo(int a, int b, int c) {

    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;

    if (a == b && b == c)
        return 1;

    if (a == b || a == c || b == c)
        return 2;

    return 3;
}
