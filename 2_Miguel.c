#include <stdio.h>

int main (){

    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d" , &numero);

    printf("O número informado foi %d, o antecessor é %d e o sucessor é %d.\n\n", numero, numero - 1, numero + 1);

    return 0;
    
}

