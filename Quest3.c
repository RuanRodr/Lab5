#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void encontrarMenorMaiorEndereco(int *vetor, int tamanho, int **enderecoMenor, int **enderecoMaior){
    *enderecoMenor = &vetor[0];
    *enderecoMaior = &vetor[0];
  
  for (int i = 1; i < tamanho; i++) {
    if (vetor[i] < *enderecoMenor) {
      *enderecoMenor = &vetor[i];
    }
    if (vetor[i] > *enderecoMaior) {
      *enderecoMaior = &vetor[i];
    }
  }   
}


int main(int argc, char *argv[]){
  
  srand(time(NULL));
  int tamanho = atoi(argv[1]);

  int *vetor = (int *)malloc(tamanho * sizeof(int));

  for (int i = 0; i < tamanho; i++){
    vetor[i] = rand() % 100;
    printf("%d ", vetor[i]);
  }
  
  int *enderecoMenor, *enderecoMaior;
  encontrarMenorMaiorEndereco(vetor, tamanho, &enderecoMenor, &enderecoMaior);

  
  printf("menor elemento: %p\n", (void *)enderecoMenor);
  printf("maior elemento: %p\n", (void *)enderecoMaior);
  
  free(vetor);

  return 0;
}
