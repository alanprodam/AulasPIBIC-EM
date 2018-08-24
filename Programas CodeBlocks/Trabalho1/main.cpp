#include <iostream>
#include <string>

using namespace std;

struct agenda{

    string nome;
    char sexo;
    int idade;
    float telefone, peso;
};

int main()
{
    struct agenda contato[5];;
    int op, i, contmaior=0, contmenor=0, contadulto=0, mediaf, somapeso=0;
    int mediaidade, cont=0, mediapeso, contm=0, contf=0, idadem=0, idadef=0, mediam;

    do{
        cout << "***********AGENDA INTERATIVA**************" << endl;
        cout << "1-Cadastro"<< endl;
        cout << "2-Mostrar"<< endl;
        cout << "3-Calculo 1"<< endl;
        cout << "4-Calculo 2"<< endl;
        cout << "5-Sair do Programa"<< endl;
        cout << "Digite sua opcao"<< endl;
        cin >> op;

        switch(op)
        {
        case 1:
            for(i=1;i<=2;i++){
                cout << "Cadastro " << i << endl;
                cout << "Digite um Nome["<<i<<"]: " << endl;
                cin >> contato[i].nome;
                cout << "Digite o Sexo["<<i<<"]: (M/F): " << endl;
                cin >> contato[i].sexo;
                cout << "Digite um Idade["<<i<<"]: " << endl;
                cin >> contato[i].idade;
                cout << "Digite o Telefone["<<i<<"]: " << endl;
                cin >> contato[i].telefone;
                cout << "Digite o Peso["<<i<<"]: " << endl;
                cin >> contato[i].peso;
            }
            break;
        case 2:
            for(i=1;i<=2;i++){
                cout << "\n\n Mostrar Cadastro " << i << endl;
                cout << "Nome["<<i<<"]: " << contato[i].nome << endl;
                cout << "Sexo["<<i<<"] (M/F): " << contato[i].sexo << endl;
                cout << "Idade["<<i<<"]: " << contato[i].idade << endl;
                cout << "Telefone["<<i<<"]: " << contato[i].telefone << endl;
                cout << "Peso["<<i<<"]: " << contato[i].peso << endl;
            }
            break;
        case 3:
            for(i=1;i<=2;i++){
                cont = cont+contato[i].idade;
                if(contato[i].idade>65){
                    contmaior++;
                }else if(contato[i].idade<18){
                        contmenor++;
                }else if(contato[i].idade>=18 && contato[i].idade<=65){
                        contadulto++;
                }
            }
            mediaidade = cont/(contmaior+contmenor+contadulto);
            cout << "Pessoas com idade acima de 65 anos: " << contmaior << endl;
            cout << "Pessoas com idade abaixo de 18 anos: " << contmenor << endl;
            cout << "Pessoas com idade entre 18 e 65 anos: " << contadulto << endl;
            cout << "Media idade total: " << mediaidade << endl;
            break;
        case 4:
            for(i=1;i<=2;i++){
                if(contato[i].sexo=='m'){
                    contm++;
                    idadem = idadem+contato[i].idade;
                }else if(contato[i].sexo=='f'){
                        contf++;
                        idadef = idadef+contato[i].idade;
                }
                somapeso = somapeso+contato[i].peso;
            }
            mediam = idadem/contm;
            mediaf = idadef/contf;
            mediapeso = somapeso/2;

            cout << "Media de idade dos homens: " << mediam << endl;
            cout << "Media de idade das mulheres: " << mediaf << endl;
            cout << "Media peso total das pessoas: " << mediapeso << endl;
            break;
        default:
            cout << "Voce digitou opcao invalida!!\n"<< endl;
            break;
        }


    }while(op!=5);

    return 0;
}
