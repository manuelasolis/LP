#include <stdio.h>

void Fibonacci(int n);

int main() {
    int n;

    printf("Quantos termos");
    scanf("%d", &n);

    Fibonacci(n);

    return 0;
}

void Fibonacci(int n) {
    int a = 0;
    int b = 1;
    int c;

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}
