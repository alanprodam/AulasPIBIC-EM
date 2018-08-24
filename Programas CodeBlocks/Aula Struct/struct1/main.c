#include <stdio.h>
#include <stdlib.h>

struct livro
{
    char nome[30];
    char autor[50];
    int ano;
};

int main()
{
    struct livro l1 = {"Primo Basilio","Eca de Queiroz",1879};

    struct livro l2 = {"Dom Casmurro","Machado de Assis",1899};

    printf("Livro 1: %s \nAutor: %s \nAno: %d\n\n",l1.nome, l1.autor, l1.ano);
    printf("Livro 2: %s \nAutor: %s \nAno: %d\n\n",l2.nome, l2.autor, l2.ano);

    return 0;
}
