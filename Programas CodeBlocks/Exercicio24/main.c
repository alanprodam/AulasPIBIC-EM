#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vcomissao, vvenda;

    printf("Digite o valor da venda: \n");
    scanf("%f",&vvenda);

    if (vvenda <= 1500)
    {
        vcomissao = vvenda*0.03;
        system("cls");
        printf("Valor comissao R$%f que tenho que receber\n\n",vcomissao);
    }
    else if (vvenda > 1500)
    {
        vcomissao = vvenda*0.05;
        system ("cls");
        printf("Valor comissao R$%f", vcomissao);
    }


    return 0;
}
