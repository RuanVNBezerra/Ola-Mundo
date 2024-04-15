#include <stdio.h>

int main() {
    int limite;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &limite);

    printf("Números primos até %d:\n", limite);

    for (int num = 2; num <= limite; num++) {
        int ehPrimo = 1; // Assume que o número é primo

        for (int div = 2; div * div <= num; div++) {
            if (num % div == 0) {
                ehPrimo = 0; // Não é primo
                break;
            }
        }

        if (ehPrimo) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
