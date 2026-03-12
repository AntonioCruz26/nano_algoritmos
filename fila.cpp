class fila
{
    private:
        class Node{
            public:
                int data;
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

        void Enqueue(int value){
            Node* novo = new Node();
            novo->data = value;
            novo->next = nullptr;

            if(IsEmpty()){
                inicio = novo;
            }
            else{
                fim->next = novo;
            }
            fim = novo;
        }

        int Dequeue(){
            int dequeued_value;
            if(IsEmpty()){
                return -1;
            }
            else{
                dequeued_value = inicio->data;
                inicio = inicio->next;
                if(inicio == nullptr){
                    fim = nullptr;
                }
                return dequeued_value;
            }

        }

        int First(){
            if(not IsEmpty()){
                return inicio->data;
            }
            else{
                return -1;
            }
        }
        
        
};

