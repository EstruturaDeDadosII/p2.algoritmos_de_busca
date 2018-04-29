//
// Created by thiago on 29/04/2018.
//

#ifndef ALGORITMOS_DE_ORDENACAO_APP_H
#define ALGORITMOS_DE_ORDENACAO_APP_H

#include <iostream>
#include <deque>
#include <time.h>

using namespace std;

class app {

public:
    deque<int> numeros;

public:
    void adicionaNaPilhaPorUsuario(int numero) {
        this->numeros.push_front(numero);
    }

    void adicionaNaFilaPorUsuario(int numero) {
        this->numeros.push_back(numero);
    }

    void adicionaMaquinaPorPilha(int quantidade) {
        for (int i = 0; i < quantidade; ++i) {
            this->numeros.push_front(getNumeroAleatorio());
        }
    }

    void adicionaMaquinaPorFila(int quantidade) {
        for (int i = 0; i < quantidade; ++i) {
            this->numeros.push_back(getNumeroAleatorio());
        }
    }

    int getNumeroAleatorio() {
        int min = 0;
        int max = INT8_MAX;
        return min + rand() * (max - min) / RAND_MAX;;
    }

    int size() {
        return this->numeros.size();
    }

    void display() {
        if (numeros.empty()) {
            cout << "A sua pilha esta vazia" << endl;
            return;
        }
        cout << "-------------" << endl;
        for (deque<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
            cout << " " << *it;
        }
        cout << endl << "-------------" << endl;
    }

    bool is_empty() {
        return this->numeros.empty();
    }


};


#endif //ALGORITMOS_DE_ORDENACAO_APP_H
