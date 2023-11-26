#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int n, int *v){
  for (int i = 0; i < n; i++) {
      v[i] = rand() % n;
  }
}

int main() {
  
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);

  int X[n], Y[n], M[n][n];
  srand(time(NULL));

  aleatorio(n, X);
  aleatorio(n, Y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("\nVetor X:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    printf("\n\nVetor Y:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", Y[i]);
    }

    printf("\n\nMatriz M:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}