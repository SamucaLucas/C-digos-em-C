#include <stdio.h>

void main(){

    int idade1, idade2;
    char nome1[100], nome2[100];
    
    
    
        printf("Qual o seu nome:\n");
        scanf("%s", &nome1);

        printf("Qual a sua idade:\n");
        scanf("%d", &idade1);

        printf("Qual o seu nome:\n");
        scanf("%s", &nome2);

        printf("Qual a sua idade:\n");
        scanf("%d", &idade2);
    

    system("cls");

   
        printf("Seu nome é: %s\n E sua idade e: %d\n\n", nome1, idade1);
        printf("Seu nome e: %s\n E sua idade e: %d\n\n", nome2, idade2);
    

    if (idade1 > idade2)
    {
        printf("O %s e mais velho\n",nome1);
    }
    else
    {
        printf("O %s e mais valho\n", nome2);
    }
    
    
    
    
}