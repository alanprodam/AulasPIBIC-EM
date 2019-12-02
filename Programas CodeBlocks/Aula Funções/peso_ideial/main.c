#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void peso_ideal(char sexo, float altura)
{
    float peso;

    switch(toupper(sexo))
    {
    case 'F' :
        peso = altura*67.1-44.7;
        break;
    case 'M' :
        peso = altura*72.7-58;
        break;
    default:
        printf("Sexo Invalido! Digite F ou M\n");
        break;
    }

    printf("Peso ideal: %.2f \n", peso);
}
int main()
{
    char sexo;
    float altura;

    printf("Digite seu sexo: \n");
    scanf("%c",&sexo);


    printf("Digite sua altura (em metros): \n");
    scanf("%f",&altura);

    peso_ideal(sexo, altura);

    return 0;
}
