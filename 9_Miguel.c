#include <stdio.h>

int main(){

    int a, b, temp;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Após a troca, a = %d e b = %d\n", a, b);

    return 0;
}

