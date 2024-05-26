#include <stdio.h>

void main(){

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    printf("O seu numero e: %d, e ele e %s", numero, (numero%2 == 0) ?  "Par" : "Impar");
}