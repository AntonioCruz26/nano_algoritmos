#include <string>
using namespace std;

class fila_pacientes
{
    private:
        class Node{
            public:
                string nome;
                Node* next;
        };
        Node* inicio;
        Node* fim;
    public:

        void Init(){
            inicio = nullptr;
            fim = nullptr;
        }

        bool IsEmpty(){
            if(inicio == nullptr && fim == nullptr){
                return true;
            }
            else{
                return false;
            }
        }

        void Enqueue(string nome){
            Node* novo = new Node();
            novo->nome = nome;
            novo->next = nullptr;

            if(IsEmpty()){
                inicio = novo;
            }
            else{
                fim->next = novo;
            }
            fim = novo;
        }

        string Dequeue(){
            string dequeued_value;
            if(IsEmpty()){
                return "";
            }
            else{
                dequeued_value = inicio->nome;
                inicio = inicio->next;
                if(inicio == nullptr){
                    fim = nullptr;
                }
                return dequeued_value;
            }

        }

};

