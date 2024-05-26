#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char produto[100];
    float preco, valorf;
    int desconto;
    

    printf("Qual o produto?\n");
    scanf("%s", &produto);

    printf("Qual o valor?\n");
    scanf("%f", &preco);

    printf("Qual o valor do desconto?\n");
    scanf("%d", &desconto);

    system("cls");

    valorf = preco -  (preco * desconto/100);

    printf("O %s vai sair por: %2.f com desconto\n E sem desconto por: %2.f",produto,valorf,preco);

}