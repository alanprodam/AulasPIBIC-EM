#include <stdio.h>
#include <stdlib.h>

struct agenda{

    char nome [20], sexo[3];
    int idade , telefone;
    float peso;

};


int main()
{
    struct agenda contato[3];
    float mediai , mediap, somaidade;
    int op, i, qtdpi=0, qtdm, qtdf;

    do{
    puts("Bem vindo a agenda!");
    puts("Digite 1 para cadastrar um novo contato");
    puts("Digite 2 para mostrar os contatos");
    puts("Digite 3 para fazer a media de peso e idade");
    scanf("%d", &op);


  switch (op){
     case 1:
        system("cls");
        puts("Voce entrou no op1");


        for (i=1; i<=2; i=i+1){
             printf("Escreva o seu nome[%d]: ",i);
             scanf("%s", &contato[i].nome);

             puts("Escreva seu sexo M ou F!");
             scanf("%s", &contato[i].sexo);

             puts("Escreva sua idade!");
             scanf("%d", &contato[i].idade);

             puts("Escreva seu telefone!");
             scanf("%d", &contato[i].telefone);

             puts("Escreva seu peso!");
             scanf("%f", &contato[i].peso);

        }

        break;

     case 2:
            system("cls");
            printf("Voce entrou na op2!");

         for (i=1; i<=2; i=i+1){


            printf("\n\nNome[%d]: %s", i, contato[i].nome);
            printf("\nIdade[%d]: %d", i,contato[i].idade);
            printf("\nTelefone[%d]: %d", i, contato[i].telefone);
            printf("\nPeso[%d]: %.2f", i, contato[i].peso);
            printf("\nSexo[%d]: %s", i, contato[i].sexo);
         }

        break;

     case 3:
        system("cls");

        qtdpi=0;
        somaidade =0;
        qtdm=0;
        qtdf=0;
        for (i=1; i<=2; i=i+1){
            somaidade= somaidade+contato[i].idade;

            if (contato[i].idade>= 18 && contato[i].idade<=65){
                qtdpi++;
            }
            if (contato[i].sexo == 'm'){
                qtdm++;
            }

            else if (contato[i].sexo == 'f'){
                    qtdf++;
            }

        }
        mediai= somaidade/2;
        printf("Media: %f",mediai);
        printf("\nA quantidade de pessoas entre 18 e 65 anos eh %d",qtdpi);
        printf("\nA quantidade de homens e %d e a de mulheres %d", qtdm, qtdf);

     default:
        printf("\nEssa opcao e invalida!\n");


        break;



  }
    } while (op!=5);


  return 0;
}







