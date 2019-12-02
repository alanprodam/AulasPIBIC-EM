#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao=44;

    while(opcao!=0)
    {
    system("cls");
    puts("Digite 0 para sair");
    printf("Escreva um Numero \n");
    scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            printf("Numero 1\n");
            system("pause");
            break;
        case 2:
            printf("Numero 2\n");
            system("pause");
            break;
        case 3:
            printf("Numero 3\n");
            system("pause");
            break;
        case 4:
            printf("Numero 4\n");
            system("pause");
            break;
        case 0:
            printf("Saida \n");
            system("pause");
            break;
        default:
            printf("Opcao invalida\n");
            system("pause");
            break;
        }
    }

    return 0;
}
