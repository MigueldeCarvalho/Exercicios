#include <stdio.h>

int main(){

    float cambio, dolares, reais;

    printf("Informe o valor do cambio(1 dolar = ? reais): ");
    scanf("%f", &cambio );

    printf("Informe a quantidade de dolares: ");
    scanf("%f", &dolares);

    reais = dolares * cambio;

    printf("Você precisa de R$%f para comprar %f dólares.\n\n", reais, dolares);

   return 0; 

}