#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    float num1[4], num2[4], media[4];
    char c;
    int i=1;
    do
    {
        printf("\nDigite a primeira nota do aluno[%d]: ",i);
        scanf("%f", &num1[i]);

        printf("\nDigite a segunda nota do aluno[%d]: ",i);
        scanf("%f", &num2[i]);

    }while (num1[i]<0 || num1[i]>10 || num2[i]<0 || num2[i]>10);

    media[i] = (num1[1]+num2[1])/2;
    printf("\nMedia do aluno[%d] = %.2f", i,media[i]);

    printf("\n");
    system("pause");

    return 0;
}
