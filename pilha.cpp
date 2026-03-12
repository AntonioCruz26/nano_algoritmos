#include <iostream>
using namespace std;


class Pilha{

    private:
        class Node
        {
            public:
                int data;
                Node* next;
        };
        Node* top;
    public:
        void Init(){
            top = nullptr;
        }
        bool IsEmpty(){
            if(top == nullptr){
                return true;
            }
            else{
                return false;
            }
        }
        void Push(int element){
            Node* novo = new Node();
            novo->data = element;
            novo->next = top;
            top = novo;
        }
        int Top(){
            if(IsEmpty() == false){
                return top->data;
            }
            else{
                return -1;
            }   
        }
        int Pop(){
            if(IsEmpty() == false){
                int element = top->data;
                top = top->next;
                return element;
            }
            else{
                return -1;
            }
        }
        

};



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