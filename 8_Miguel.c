#include <stdio.h>
#include <math.h> 

int main(){

   int a, b;

   printf("Digite o primeiro número: ");
   scanf("%d", &a);
   printf("Digite o segundo número: ");
   scanf("%d", &b);
   printf("Soma: %d\n", a + b);
   printf("Subtração: %d\n", a - b);
   printf("Multiplicação: %d\n", a * b);
   if (b != 0) {
        printf("Divisão: %.2f\n", (float)a / b);
        printf("Resto da divisão: %d\n", a % b);
    } else {
        printf("Divisão e resto não definidos (divisor é zero).\n");
    }
    printf("Potência: %.0f\n\n", pow(a, b));

    return 0;

}