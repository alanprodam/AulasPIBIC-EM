#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x = 3.7;
    int y = 2;
    int z = 4;

    x = ceil(x);
    y = pow(x,y);
    z = sqrt(z);

    printf("\nCeil 3.7 = %.2f \n",x);
    printf("\nPow (4,2) = %d \n",y);
    printf("\nSqrt 4 = %d \n",z);

    return 0;
}
