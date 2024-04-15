#include <stdio.h>

int main() {
    int n = 5; // Número de termos a serem somados
    int soma = 0; // Inicializa a variável para armazenar a soma

    for (int i = 1; i <= n; i++) {
        soma += i; // Adiciona o valor de 'i' à soma
    }

    printf("A soma dos primeiros %d números inteiros positivos é: %d\n", n, soma);

    return 0;
}
