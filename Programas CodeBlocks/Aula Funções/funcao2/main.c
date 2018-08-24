#include <stdio.h>
#include <stdlib.h>

void linha()
{
    int i;

    for(i=1;i<=25;i++){
        printf("*");
    }
    printf("\n");
}

int main()
{
    int i;

    linha();
    linha();
    linha();

    printf("Numero de (1 ate 10): \n");
    for(i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");

    for(i=1;i<=200;i++){
        linha();;
    }



    return 0;
}


