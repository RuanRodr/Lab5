#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n, sum = 0;
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &n);

  int M[n][n];
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      M[i][j] = rand() % 100;
      if (i == j) {
        sum += M[i][j];
      }
    }
  }

  printf("\nMatriz gerada aleatoriamente:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  printf("\nA soma da diagonal principal é %d, que é um número %s.\n", sum, sum % 2 == 0 ? "par" : "ímpar");

    return 0;
}