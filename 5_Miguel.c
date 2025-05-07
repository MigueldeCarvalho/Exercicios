 #include <stdio.h>
 
 int main(){
    
    float valorcompra, valorvenda;

    printf("Informe o valor de compra da mercadoria: R$");
    scanf("%f", &valorcompra);
    valorvenda = valorcompra + (valorcompra * 0.2) + (valorcompra * 0.3);
    printf("O valor de venda será: R$%.2f\n\n", valorvenda);

    return 0;

 }

