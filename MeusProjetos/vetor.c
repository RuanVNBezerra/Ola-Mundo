#include <stdio.h>

int main() {
  int n;

  // Declarando vetores
  int vetor1[10], vetor2[10], soma[10];

  // Lendo o tamanho do vetor
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  // Lendo os elementos do primeiro vetor
  printf("Digite os elementos do primeiro vetor: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &vetor1[i]);
  }

  // Lendo os elementos do segundo vetor
  printf("Digite os elementos do segundo vetor: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &vetor2[i]);
  }

  // Somando os vetores
  for (int i = 0; i < n; i++) {
    soma[i] = vetor1[i] + vetor2[i];
  }

  // Imprimindo o resultado
  printf("Soma dos vetores: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", soma[i]);
  }

  printf("\n");

  return 0;
}
