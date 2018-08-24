#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saldo, saldoatual, debito, credito, numcliente, desligar;
    do
    {
    puts("escreva seu numero do cliente");
        scanf("%d", &numcliente);

    puts("Escreva seu saldo\n");
    scanf("%d", &saldo);

    printf("escreva seu debito\n");
        scanf ("%d", &debito);
    printf("escreva seu credito\n");
        scanf ("%d", &credito);
    saldoatual=saldo-debito+credito;
    printf ("seu saldo atual eh de %d\n", saldoatual);
    system("pause");
    system("cls");

    }
    while (saldo != -99999);

    return 0;
}

