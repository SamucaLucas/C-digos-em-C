#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, imc;
    char nome [100];
    

    printf("Qual o seu nome?\n");
    scanf("%s", &nome);

    printf("Qual a sua altura ?\n");
    scanf("%f", &altura);

    printf("Qual o seu peso?\n");
    scanf("%f", &peso);

    imc = peso/(altura*altura);

    if (imc < 18.5)
    {
        printf("Ola %s, seu IMC e %f, Voce está abaixo do peso", nome, imc);
    }
    else if ((imc >= 18.5) & (imc <= 24.9))
    {
        printf("Ola %s, seu IMC e %f, Voce esta normal", nome, imc);
    }
    else if (imc > 25)
    {
        printf("Ola %s , seu IMC e %f, Voce esta obeso", nome, imc);
    }
    else
    {
        printf("Valor invalido");
    
    
    return 0;

}
}