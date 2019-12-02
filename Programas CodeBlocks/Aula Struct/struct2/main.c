#include <stdio.h>
#include <stdlib.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

struct livro
{
    char nome[30];
    char autor[50];
    int edicao;
    struct data data_pub;
};

int main()
{
    struct livro l1 = {"Primo Basilio","Eca de Queiroz",9};
    l1.data_pub.ano = 1878;

    struct livro l2 = {"Dom Casmurro","Machado de Assis",7};
    l2.data_pub.ano = 1899;

    printf("Livro 1: %s \nAutor: %s \nEdicao: %d \nAno: %d \n\n",l1.nome, l1.autor, l1.edicao, l1.data_pub.ano);
    printf("Livro 2: %s \nAutor: %s \nEdicao: %d \nAno: %d \n\n",l2.nome, l2.autor, l2.edicao, l2.data_pub.ano);

    return 0;
}
