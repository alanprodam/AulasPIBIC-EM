#include <iostream>

using namespace std;

struct agenda
{
    char nome[30];
    int idade;
    int telefone;
    float peso;
    char sexo;


};


int main()
{

    struct agenda contato[5];

    int opcao;

    do{
    cout << "\n\n\n\n\n\n***********Agenda************";
    cout << "\n 1-Cadastrar";
    cout << "\n 2-Mostrar";
    cout << "\n 3-Calculo 1";
    cout << "\n 4-Calculo 2";
    cout << "\n 5-Sair";

    cout << "\n Escolha uma Opcao:";
    cin >> opcao;


    switch (opcao)
    {
    case 1:

        for(i=1;i<=2;i++){
            cout << "\n***********Cadastrar************";
            cout << "\nDigite seu nome:";
            cin >> contato[i].nome;

            cout <<"\n Digite seu sexo:";
            cin >> contato[i].sexo;

            cout <<"\n Digite sua idade:";
            cin >> contato[i].idade;

            cout << "\n Digite seu telefone:";
            cin >> contato[i].telefone;

            cout << "\n Digite seu peso:";
            cin >> contato[i].peso;
        }
        break;
    case 2:
        cout << "\n Mostrar:" << endl;

        cout << "Nome: " << contato[1].nome << endl;
        cout << "Sexo: " << contato[1].sexo << endl;
        cout << "Idade: " << contato[1].idade << endl;
        cout << "Telefone: " << contato[1].telefone << endl;
        cout << "Peso: " << contato[1].peso << endl;
        break;
    case 3:
         cout << "\n Calculo 1:";

         break;
    case 4:
        cout << "\n Calculo 2:";
        break;
    default:
        cout << "\n Opcao Invalida, digite novamente:";
        break;

    }

    }while(opcao!=5); //se for verdaderio: repete. Se for falso: sai.


    return 0;

}








