#include <stdio.h>
#include <stdlib.h>

#include<string.h>

int main()
{
    char c;
    char s[20];

    //scanf(" %c",&c);
    //c = getchar();

    //scanf(" %s", s);
    gets(s);


    //printf("O caracter digitado foi: %c", c);
    puts("A string digitada foi: ");
    printf("%s \n",s);


    return 0;
}
