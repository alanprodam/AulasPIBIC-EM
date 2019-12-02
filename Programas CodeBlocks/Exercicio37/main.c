#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pera (float peso_p)
{
    float preco;
    if (peso_p <= 5)
    {
        preco=peso_p*2.5;
    }
    else if (peso_p > 5)
    {
        preco=peso_p*2.2;
        if (peso_p>8 || preco>25)
        {
            preco = (preco*0.9);
        }

    }

    return preco;
}

float maca (float peso_p)
{
    float preco;
    if(peso_p<= 5)
    {
        preco=peso_p*1.8;
    }
    else if (peso_p>5)
    {
        preco=peso_p*1.5;

        if (peso_p>8 || preco>25)
        {
            preco = (preco*0.9);
        }
    }

    return preco;
}


int main()
{

    float perakg, macakg, preco;
    char fruta;
    int i;

    do
    {
    printf("Escolha sua fruta!\n");
    scanf("%c", &fruta);

    switch(fruta)
    {
        case 'p':
            printf("Informe o peso da pera em KG!\n");
            scanf("%f", &perakg);
            preco = pera(perakg);
            printf("%f", preco);

            break;
        case 'm':
            printf("Informe o peso do maca em KG!\n");
            scanf("%f", &macakg);
            preco=maca(macakg);
            printf("%.2f",preco);
            break;

        default:
            puts("\nFruta invalida! Digite 'p' ou 'm' !\n ");

    }

    }while(i!=0);

    return 0;
}
