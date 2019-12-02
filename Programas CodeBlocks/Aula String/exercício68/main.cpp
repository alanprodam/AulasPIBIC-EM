#include <iostream>

using namespace std;

int main()

{

int nummercadoria;
float precomercadoria, medprod;
    cout << "escreva o numero total das mercadorias em estoque\n";
    cin >> nummercadoria;
    cout << "escreva o valor do produto\n";
    cin >> precomercadoria;
    medprod=nummercadoria*precomercadoria;
    cout << "o valor total do estoque e de R$"<<medprod;


    return 0;
}
