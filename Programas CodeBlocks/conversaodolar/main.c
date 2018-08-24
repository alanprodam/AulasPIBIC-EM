#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vdolar, vtaxa, vreal;
    vtaxa = 3;

    printf("Digite o valor em reais: ");
    scanf("%f",&vdolar);

    printf("Digite o valor da taxa");
    //scanf("%f",&vtaxa);
    vreal = vdolar * vtaxa;
    printf("valor em reais = %f",vreal);

    return 0;
}
