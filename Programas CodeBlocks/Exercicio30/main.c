#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,vaux;

    //criação de vetor
    int vet[4];

    //leitura vetor
    for(i=0;i<4;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(i=0;i<4;i++)//1-4
    {
        printf("Vetor[%d]: %d \n",i,vet[i]);
    }

    printf("\n\n");

    //ordenar
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(vet[i]>vet[j])
            {
                vaux = vet[j];
                vet[j] = vet[i];
                vet[i] = vaux;
            }
        }

    }

    //escrita
    for(i=0;i<4;i++)
    {
        printf("Vetor[%d]: %d \n",i,vet[i]);
    }

    return 0;
}

