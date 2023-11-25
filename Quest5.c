#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float somar(float *vetor, int tam){
  float soma = 0;
  for(int i = 0; i < tam; i++){
    soma += vetor[i];
  }
  return soma;
}

int main(int argc, char *argv[]) {
  
  srand (time(NULL));

  if(argc != 2){
    puts("Valor indesejavel");
    return 1;
  }

  int tam = atoi(argv[1]);

  float *vetor = (float *) malloc(tam *sizeof(float));

  if(vetor == NULL){
    puts("Deu erro");
    return 1;
  }

  for(int i = 0; i < tam; i++){
    vetor[i] = (float) rand() / RAND_MAX;
  }

  float soma = somar(vetor, tam);

  printf("A soma dos números é %.2f", soma);
  
  free (vetor);
  
  return 0;
}