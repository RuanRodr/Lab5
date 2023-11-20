#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if(argc < 2){
    return 1;
  }
  
  int num1 = atof(argv[1]);
  int num2 = atof(argv[2]);
  char letra = argv[3][0];

  int resul;
  
  switch(letra){
    case 's':
    resul = num1 + num2;
    break;
    
    case 'm':
    resul = num1 * num2;
    break;
    
    default:
    puts("Operação incorreta");
    break;
  }
  return 0;
}
