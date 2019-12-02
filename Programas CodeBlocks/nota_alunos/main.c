#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    float num1[10], num2[10], media[10];
    char c;
    int i=1,j,n;


    do
    {
        printf("Digite a primeira nota do Aluno[%d]: ",i);
        scanf("%f", &num1[i]);

        printf("Digite a segunda nota do Aluno[%d]: ",i);
        scanf("%f", &num2[i]);

        i=i+1;
    }while (i<=2 && num1[i]<0 || num1[i]>10 || num2[i]<0 || num2[i]>10);

    //for(i=0;i<2;i++){

    //}
        //puts("Deseja calcular novamente? (S/N)");
        //scanf("%c", &c);
        //system("pause");

    for(j=1;j<=i;j++){
        media[j] = (num1[j]+num2[j])/2;
        printf("\n Media do aluno[%d] %.2f", j, media[j]);
    }

    return 0;
}
