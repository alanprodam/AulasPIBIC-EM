#include <stdio.h>
#include <stdlib.h>

int main()
{int logincadas, passcadas, login, pass;
login= 1234;
pass= 4321;
printf("Digite seu endereço de usuario\n");
scanf("%d",&logincadas);
    if (logincadas == login)
    {
     printf("Digite senha do usuario");
     scanf("%d",&passcadas);
     if (passcadas == pass)
     {
         printf("Acesso garantido");


     }
     else {printf("Voce errou a senha");}

    }

    else{printf("Voce errou o usuario");}
    return 0;
}
