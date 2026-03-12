#include <iostream>
using namespace std;

class Node{

    public:
        int dado;
        class Node* next;

};

int main(){

    Node* lista = nullptr;
    cout << "Valor ponteiro lista: " << lista << "\n";

    Node* novo = new Node();

    novo->dado = 5;
    novo->next = lista;
    lista = novo;

    cout << "Atributos do node lista | Dado: " << lista->dado << " Endereco: " << lista->next;
    

    return 0;
}