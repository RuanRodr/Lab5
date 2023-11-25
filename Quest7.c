#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float calcularMSE(float *vetorA, float *vetorB, int tamanho) {
  float mse = 0.0;

  for (int i = 0; i < tamanho; i++) {
    mse += pow((vetorA[i] - vetorB[i]), 2);
  }

  mse /= tamanho; 
  
  return mse;
}

int main(){
  
  srand((unsigned)time(NULL));

  int tamanho = 10;

  float *vetorA = (float *)malloc(tamanho * sizeof(float));
  float *vetorB = (float *)malloc(tamanho * sizeof(float));

  if (vetorA == NULL || vetorB == NULL) {
    puts("deu erro");
    return 1;
  }

  for (int i = 0; i < tamanho; i++) {
    vetorA[i] = rand() % 10;
    vetorB[i] = rand() % 10;
  }

  printf("Vetor A:\n");
  
  for (int i = 0; i < tamanho; i++) {
    printf("%.2f ", vetorA[i]);
  }
  
  printf("\n");

  printf("Vetor B:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%.2f ", vetorB[i]);
  }
  
  printf("\n");
  
  float mse = calcularMSE(vetorA, vetorB, tamanho);
  printf("Erro Médio Quadrático (MSE): %.2f\n", mse);
  
  free(vetorA);
  free(vetorB);

  return 0;
}