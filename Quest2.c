#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
  
  srand(time(NULL));
  int tamanho = atoi(argv[1]);

  int *vetor = (int *)malloc(tamanho * sizeof(int));

  for (int i = 0; i < tamanho; i++){
    vetor[i] = rand() % 100;
    printf("%d ", vetor[i]);
  }
  int menor = vetor[0];
  int *enderecoMenor = &vetor[0];
  for (int i = 1; i < tamanho; i++){
    if (vetor[i] < menor) {
      menor = vetor[i];
      enderecoMenor = &vetor[i];
    }
  }
  printf("menor elemento: %p\n", (void *)enderecoMenor);
  free(vetor);

  return 0;
}
