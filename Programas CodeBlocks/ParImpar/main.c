#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Numero Par!!");
    }
    else
    {
        printf("Numero Impar!!");
    }

    return 0;
}
