#include <iostream>
#include "fila.cpp"
using namespace std;


int main(){

    int numero;

    fila* f = new fila();

    f->Init();

    do{
        cout << "Digite um numero para adicionar na fila (ou 0 para parar de adicionar): ";
        cin >> numero;

        f->Enqueue(numero);

        cout << "Item no inicio da lista: " << f->First() << endl;

    }while(numero!=0);

    do{
        cout << "Item removido: " << f->Dequeue() << endl;
    }while(not f->IsEmpty());

    return 0;
}