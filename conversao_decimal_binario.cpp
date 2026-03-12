#include <iostream>
#include "pilha.cpp"
using namespace std;


int main(){

    int numero, resto;

    Pilha* p = new Pilha();

    p->Init();

    cout << "Digite o numero em decimal para converter para binario: ";
    cin >> numero;

    while (numero != 0){
        resto = numero % 2;
        p->Push(resto);
        numero = numero / 2;

    }

    cout << "Numero em Binario: ";
    while(p->IsEmpty() == false){
        cout << p->Pop();
    }

    return 0;
}