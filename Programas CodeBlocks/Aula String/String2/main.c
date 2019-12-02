#include <stdio.h>
#include <stdlib.h>

#include<string.h>

int main()
{
    char s1[10]={"PIBIC"};
    char s2[10]={" EM"};
    char s3[10]={"ALAN"};

    printf("s1: %s\n",s1);
    printf("s2: %s\n",s2);
    printf("s3: %s\n\n",s3);

    //strcpy
    strcpy(s3,s1);
    printf("strcpy \n s3: %s\n", s3);

    //strcmp - comparar
    int cmp = strcmp(s1, s2);
    printf("strcmp: %d \n", cmp);

    //strcat - concatenar
    strcat(s1,s2);
    printf("strcat: %s \n", s1);

    //strlen
    int len = strlen(s1);
    printf("strlen: %d \n", len);

    //terceiro caracte
    printf("Terceiro caracte: %c \n\n", s1[2]);

    return 0;
}
