#include <iostream>
#include "app.h"

using namespace std;

app app;

void menu();
int main() {
    menu();
    return 0;
}


//Falta deletar numeros
void menu() {

    int choice = -9999;
    int numero = -99999;
    int quantidade = -9999;
    cout << "[  1  ] Adicionar numeros manualmente em fila" << endl;
    cout << "[  2  ] Adicionar numeros manualmente em pilha" << endl;
    cout << "[  3  ] Deixar a maquina adicionar em pilha" << endl;
    cout << "[  4  ] Deixar a maquina adicioanr em fila" << endl;
    cout << "[  5  ] Ordenacao simples com Bburble Sort" << endl;
    cout << "[  6  ] Ordenacao simples com insert sort" << endl;
    cout << "[  7  ] Ordenacao complexa com quick sort" << endl;
    cout << "[  8  ] Ordenacao complexa com shell sort" << endl;
    cout << "[  9  ] Ordenacao complexa com merge sort" << endl;
    cout << "[  10 ] Ordenacao complexa com bucket sort" << endl;
    cout << "[  11 ] Tamanho do array" << endl;
    cout << "[  12 ] Sera que esta vazio" << endl;
    cout << "[  13 ] Imprimir normalmente" << endl;
    cout << "[  0  ] SAIR" << endl << endl;
    cout << "Digite alguma opcao valida: ";
    cin.clear();
    cin >> choice;

    switch(choice) {
        case 0:
            cout << "Fim do programa" << endl << endl;
            return;
        case 1:
            cout << "Digite um numero: ";
            cin >> numero;
            app.adicionaNaFilaPorUsuario(numero);
            break;
        case 2:
            cout << "Digite um numero: ";
            cin >> numero;
            app.adicionaNaPilhaPorUsuario(numero);
            break;
        case 3:
            cout << "Digite a quantidade que deseja adicionar: ";
            cin >> quantidade;
            app.adicionaMaquinaPorPilha(quantidade);
            break;
        case 4:
            cout << "Digite a quantidade que deseja adicionar: ";
            cin >> quantidade;
            app.adicionaMaquinaPorFila(quantidade);
            break;


        case 11:
            cout << "Tamanho do Array: " << app.size() << endl << endl;
            break;

        case 12:
            cout << "Sera que esta vazio: " << app.is_empty() ? "Sim!\n\n" : "Não\n\n";
            break;

        case 13:
            cout << "Imprimir" << endl;
            app.display();

        default:
            cout << "Opcao invalida. Tente novamente!" << endl;

    }

    menu();

}