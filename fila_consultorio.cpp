#include <iostream>
#include <string>
#include "fila_pacientes.cpp"
using namespace std;

int main(){
    fila_pacientes* fp = new fila_pacientes();
    int opcao;
    string nome;


    fp->Init();

    cout << "\n====Sistema de Atendimento====\n";

    do{
        cout <<  "1  -  Insere paciente na fila de espera\n2  -  Chamar paciente\n3  -  Sair do sistema\nEscolha uma opcao:";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            cout << "\nDigite o nome do paciente: ";
            cin >> nome;

            fp->Enqueue(nome);
            break;
        case 2:
            if(fp->IsEmpty()){
                cout << "\nNao exitem pacientes para chamar\n";
            }
            else{
                cout << "\nPaciente " << fp->Dequeue() << " comparecer na consultorio!" << "\n";
                cin;
            }
            break;
        case 3:
            if(not fp->IsEmpty()){   
                cout << "\nAinda existem pacientes para serem atendidos!\n";
                opcao = 1;
            }
            break;
        
        default:
            cout << "\nOpcao invalida\n";
            break;
        }
        

    }while(opcao != 3);

}