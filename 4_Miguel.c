#include <stdio.h>


int main(){

    float volume, raio, altura;
    const float PI =  3.14159;

    printf("Digite o raio da lata: ");
    scanf("%f", &raio);

    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("O volume da lata é: %.2f cm³\n\n", volume);

    return 0;

}