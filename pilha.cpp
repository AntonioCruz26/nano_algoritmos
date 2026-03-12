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