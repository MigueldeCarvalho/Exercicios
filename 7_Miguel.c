#include <stdio.h>

int main(){
    
    float fahrenheit, celsius;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%.2fºF equivalem a %.2fºC.\n\n", fahrenheit, celsius);

     return 0;

}