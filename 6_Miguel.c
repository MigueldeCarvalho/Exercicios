#include <stdio.h>

int main(){
 
  float valorinicial, valorfinal;
  int anos = 3;
  float taxajuros = 0.05;

  printf("Informe o valor investido: R$");
  scanf("%f", &valorinicial);
  valorfinal = valorinicial + (valorinicial * taxajuros * anos);
  printf("Após %d anos, Maria terá: R$%.2f\n\n", anos, valorfinal);

  return 0;

}

