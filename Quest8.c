#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int m, n, t;
  printf("Digite o número de linhas da matriz: ");
  scanf("%d", &m);
  printf("Digite o número de colunas da matriz: ");
  scanf("%d", &n);
  printf("Digite o valor do limiar t: ");
  scanf("%d", &t);

  int M[m][n], S[m][n];
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      M[i][j] = rand() % 100;
      S[i][j] = M[i][j] > t ? 1 : 0;
    }
  }

  printf("\nMatriz M:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz S:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", S[i][j]);
    }
    printf("\n");
  }

  return 0;
}