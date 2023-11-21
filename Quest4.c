#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

  int X;
  scanf("%d", &X);

  srand(time(NULL));
  
  int vetor[X];
  
  for(int i = 0; i < X; i++){
    vetor[i] = rand() % 100;
    printf("%d\n", vetor[i]);
  } 
  
  int *maior = 0;
  int *menor = 0;
  
  for (int i = 0; i < X; i++) {
    if (i == 0) {
      menor = &vetor[i];
      maior = &vetor[i];
    }
    if (vetor[i] > *maior) {
      maior = &vetor[i];
    }
    if(vetor[i] < *menor){
      menor = &vetor[i];
    }
  }
  
printf("O valor de maior é %d e o menor é %d\n\n", *maior, *menor);

int X1 = (X - *menor) / *maior - *menor;

  printf("O valor de X1 é %d", X1);
  
  return 0;
}