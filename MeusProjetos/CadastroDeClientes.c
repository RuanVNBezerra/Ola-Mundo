#include <stdio.h>
#include <stdlib.h>

struct Cliente {
    char nome[100];
    char email[100];
};

int main() {
    struct Cliente clientes[100];
    int opcao, numClientes = 0;

    do {
        printf("Selecione uma opção:\n");
        printf("1 - Adicionar cliente\n");
        printf("2 - Visualizar clientes\n");
        printf("3 - Editar cliente\n");
        printf("4 - Excluir cliente\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o nome do cliente: ");
                scanf("%s", clientes[numClientes].nome);
                printf("Digite o email do cliente: ");
                scanf("%s", clientes[numClientes].email);
                numClientes++;
                printf("Cliente adicionado com sucesso.\n");
                break;
            case 2:
                printf("Clientes cadastrados:\n");
                for (int i = 0; i < numClientes; i++) {
                    printf("Nome: %s\n", clientes[i].nome);
                    printf("Email: %s\n", clientes[i].email);
                    printf("----------------------\n");
                }
                break;
            // Implemente as outras opções (editar, excluir) conforme necessário
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
