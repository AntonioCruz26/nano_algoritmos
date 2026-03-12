#include <iostream>
using namespace std;

int elementos[10] = {12, 15, 23, 42, 54, 63, 70, 72, 82};
int valor = 83, swap_position, swap_value, aux;


int main(){
    //pegar o elemento 18 e comparar por meio de um loop 
    //com os valores, quando ele achar um valor maior que ele, 
    //o algoritmo ira inserir uma casa a esquerda e um outro loop 
    //irá reorganizar o resto dos valores 

    for(int i = 0 ; i <= 9 ; i++){
        if(elementos[i-1] < valor && elementos[i] > valor){
            swap_position = i;
            swap_value = elementos[i];
            elementos[i] = valor;
        }
    }

    for (int i = swap_position+1; i<=9 ; i++){
        aux = elementos[i];
        elementos[i] = swap_value;
        swap_value = aux;

    }

    for(int i = 0 ; i<=9 ; i++){
        cout << elementos[i] << " ";
    }
    
    return 0;
}