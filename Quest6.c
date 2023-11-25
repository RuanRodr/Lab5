#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

float Media(int *vetor, int tamanho) {
  float soma = 0.0;
  for (int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }
  return soma / tamanho;
}

float Mediana(int *vetor, int tamanho) {

  qsort(vetor, tamanho, sizeof(int), comparar);

  if (tamanho % 2 == 0) {
    return (float)(vetor[tamanho / 2 - 1] + vetor[tamanho / 2]) / 2.0;
  } else {
    return (float)vetor[tamanho / 2];
  }
}


void Moda(int *vetor, int tamanho) {
    
  qsort(vetor, tamanho, sizeof(int), comparar);

  int moda = vetor[0]; 
  int contagemAtual = 1;
  int contagemMaxima = 1; 

  for (int i = 1; i < tamanho; i++) {
    if (vetor[i] == vetor[i - 1]) {
      contagemAtual++;
    } else {
      contagemAtual = 1;
      }
    if (contagemAtual > contagemMaxima) {
      contagemMaxima = contagemAtual;
      moda = vetor[i];
    }
  }
  printf("Moda: %d\n", moda);
}

int main(int argc, char *argv[]) {

srand (time(NULL));

if(argc != 2){
  puts("Valor indesejavel");
  return 1;
}

  int tam = atoi(argv[1]);

  int *vetor = (int *)malloc(tam * sizeof(int));
  
  if(vetor == NULL){
    puts("Deu erro");
    return 1;
  }

  for (int i = 0; i < tam; i++) {
    vetor[i] = rand() % 10;
  }
  
  for (int i = 0; i < tam; i++) {
      printf("%d\n", vetor[i]);
  }

  printf("Média: %.2f\n", Media(vetor, tam));
  printf("Mediana: %.2f\n", Mediana(vetor, tam));
  Moda(vetor, tam);

  free(vetor);
  return 0;
}
