#include <iostream>

using namespace std;

struct cadastro
{
    char nome[20];
    float nota[5];
    float media;
};

int main()
{
    int i;
    float soma=0;
    struct cadastro aluno1;
    struct cadastro aluno2;


    cout << "\nDigite seu nome: ";
    cin >> aluno1.nome;

    for(i=1;i<=5;i++)
    {
        cout << "\nDigite Nota: ["<<i<<"]: ";
        cin >> aluno1.nota[i];

        if (aluno1.nota [i] >= 11 || aluno1.nota [i] <0)
        {
            cout << "\nNota Invalida, digite novamente!";
            i=i-1;
        }

        else
        {
           soma = soma + aluno1.nota[i];

        }

    }

    aluno1.media = soma/5;

    if (aluno1.media <=4)
    {
        cout <<"\nNome: " << aluno1.nome;
        cout <<"\nMedia: " << aluno1.media;
        cout << "\nvoce foi reprovado, que pena";
    }

    else if (aluno1.media >=5)
    {
        cout <<"\nNome: " << aluno1.nome;
        cout <<"\nMedia: " << aluno1.media;
        cout << "\nvoce foi aprovado, parabens!";
    }


    cout << "\n";

    return 0;
}
