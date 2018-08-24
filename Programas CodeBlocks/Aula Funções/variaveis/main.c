#include <stdio.h>
#include <stdlib.h>

int x;

void funcao()
{
    int y;
    x = 2;
    y = 2;
    printf("X no funcao(): %d\n",x);
    printf("Y no funcao(): %d\n",y);
}

int main()
{
    int y;

    x = 5; //global
    y = 5; //local

    printf("X no main antes funcao(): %d\n",x);
    printf("Y no main antes funcao(): %d\n",y);

    funcao();

    printf("X no main antes funcao(): %d\n",x);
    printf("Y no main antes funcao(): %d\n",y);

    return 0;
}
