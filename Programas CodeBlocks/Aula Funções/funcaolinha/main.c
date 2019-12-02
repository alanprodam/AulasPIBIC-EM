#include <stdio.h>
#include <stdlib.h>

void linha(char c, int n)
{
    int i;
    for(i=1;i<=n;i++){
        printf("%c",c);
    }
    printf("\n");
}

int main()
{
    int i;

    //linha('*',10);
    printf("Numero de (1 ate 10): \n");
    for(i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");
    //linha('#',20);

    return 0;
}
