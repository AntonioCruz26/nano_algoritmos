#include <iostream>
#include "pilha.cpp"
using namespace std;

int main(){

    Pilha* p = new Pilha();
    p->Init();
    int entrada;

    do{

        cout << "Digite um numero para entrar na pilha (digite 0 para parar): ";
        cin >> entrada;
        p->Push(entrada);
        cout << "O topo da pilha é: " << p->Top() << endl;

    }while(entrada != 0);

    do{
        cout << "Elemento retirado: " << p->Pop() << endl;

    }while(p->IsEmpty() != true);

    

    return 0;
}