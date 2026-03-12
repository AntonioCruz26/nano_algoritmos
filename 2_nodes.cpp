#include <iostream>
using namespace std;

class Node{

    public:
        int dado;
        class Node* next;

};

int main(){

    Node* lista = nullptr;
    cout << "Valor primeiro ponteiro: " << lista;

    for(int i = 1 ; i<=2 ; i++){
        Node* novo = new Node();
        novo -> dado = i+5;
        novo -> next = lista;
        lista = novo;
    }

    cout << "\nDado do no apontado por lista: " << lista->dado << endl
         << "Dado do no apontado por prox: " << lista->next->dado;

    cout << "\nEndereco no lista: " << lista << "Endereco proximo: " << lista->next << endl;
    
    Node* aux = lista;

    while (aux != nullptr){
        cout << "\nDado no no apontado por prox: " << aux->dado << endl;
        aux = aux->next;
    }

    return 0;
}