#include <stdio.h>

void main(){

    char loja[2][100];
    int valorsoma[2], desconto[2], valorfinal[2];
    int i;

    printf("Digite o valor de um notebook e um celular das lojas\n");
    
    for (int i = 0; i < 2; i++)
    {
        printf("Nome da loja %d\n", i+1);
        fflush(stdin);
        gets(loja[i]); 
        
        printf("Digite o valor somado dos itens\n");
        fflush(stdin);
        scanf("%d", &valorsoma[i]);

        printf("Qual o valor do desconto?\n");
        scanf("%d", &desconto[i]);
        desconto[i]/=100;
        valorfinal[i] = valorsoma[i] - (valorsoma[i] * desconto[i]);
    
    }

    system("cls");

    
    if (valorfinal[0] > valorfinal[1])
    {
        printf("A loja %s e a melhor opcao para voce", loja[0]);
    }
    else if (valorfinal[1] > valorfinal[0])
    {
        printf("A loja %s e a melhor opcao para voce", loja[1]);
    }
    
    
    


}