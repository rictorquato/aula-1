#include <stdio.h>

int main (){

    float peso;
    peso = 75;

    float altura;
    altura = 1.79;

    float alturaXaltura;
    alturaXaltura = altura * altura;

    float imc;
    imc = peso / alturaXaltura;
    
    printf ("o imc calculado é: %lf.", imc);

    return 0;
}
