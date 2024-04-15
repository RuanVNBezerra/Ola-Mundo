#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Selecione o operador:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &operador);

    switch (operador) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido.\n");
            break;
    }

    return 0;
}
