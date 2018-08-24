#include <stdio.h>
#include <stdlib.h>

struct agenda
{
    char nome[30];
    char genero[30];
    double numero[3];
    int idade;
    char endereco [30];
    char profissao[30];
};

int main()
{
    struct agenda contato1;
    struct agenda contato2;

    puts("********Agenda*************");
    puts("Digite Nome: ");
    gets(contato1.nome);

    puts ("digite seu genero");
    gets(contato1.genero);

    puts("Digite sua profissao");
    gets(contato1.profissao);

    puts("Digite o seu endereco");
    gets(contato1.endereco);

    puts("Digite sua Idade: ");
    scanf("%d",&contato1.idade);

    puts("Digite Numero(celular): ");
    scanf("%lf",&contato1.numero[1]);

    puts("Digite Numero(fixo): ");
    scanf("%lf",&contato1.numero[2]);




    printf("\nNome: %s",contato1.nome);
    printf("\nNumero(celular): %.0lf",contato1.numero[1]);
    printf("\nNumero(fixo): %.0lf",contato1.numero[2]);
    printf("\nIdade: %d",contato1.idade);
    printf("\ngenero: %s", contato1.genero);
    printf("\nprofissao: %s", contato1.profissao);
    printf("\nendereco: %s", contato1.endereco);





    puts("\n");
    return 0;
}

