#include <iostream>

using namespace std;

struct estoque
{
string nomep;
int codigo;
float preco, valor;
};

int main()
{
    struct estoque produto[3];
    int quantidade=0;
    int quantidadep=2;
    float media;
    float preco;
    int codigo;
    float precototal;
    int opcoes;

    do
    {
    cout << "Bem vindo ao leitor inteligente de produtos\n";
    cout << "pressione 1 para cadastrar\n";
    cout << "pressione 2 para mostrar os produtos cadastrados\n";
    cout << "pressione 3 para mostrar os calculos\n";
    cout << "digite 99 para sair do programa\n";


    cin >> opcoes;


    switch (opcoes)
    {
    case 1 :

        cout << "Digite o nome do produto 1\n";
        cin >> produto[1].nomep;

        cout << "Digite o codigo do produto 1\n";
        cin >> produto[1].codigo;

        cout << "digite o preco do produto 1\n";
        cin >> produto[1].preco;

        cout << "Digite o nome do produto 2\n" ;
        cin >> produto[2].nomep;

        cout << "Digite o codigo do produto 2\n";
        cin >> produto[2].codigo;

        cout << "digite o preco do produto 2\n";
        cin >> produto[2].preco;

    if(produto[1].preco >= 50 || produto[1].preco<= 200)
    {
    quantidade++;
    }
    if (produto[2].preco >= 50 || produto[2].preco <= 200)
    {
    quantidade++;
    }
    media=(produto[1].preco+produto[2].preco)/2;
    precototal=(produto[1].preco+produto[2].preco);
    break;

    case 2 :

        cout << "nome do produto 1: " << produto[1].nomep <<endl;
        cout << "codigo do produto 1: " << produto[1].codigo <<endl;
        cout << "preco do produto 1: " << produto[1].preco <<endl;
        cout << "nome do produto 2: " << produto[2].nomep << endl;
        cout << "codigo do produto 2:" << produto[2].codigo <<endl;
        cout << "preco do produto 2: " << produto[2].preco << endl;
        break;

    case 3 :

        cout << "media de preco dos produtos: " << media <<endl;
        cout << "preco total dos produtos: " <<precototal <<endl;
        cout << "quantidade de produtos entre 50 e 200 reais: " << quantidade <<endl;
        cout << "quantidade total de produtos: " << quantidadep <<endl;
        break;

    }
    }while (opcoes !=99);
    return 0;
}
