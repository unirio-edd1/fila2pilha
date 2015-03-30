#ifndef FILA2PILHA_H
#define FILA2PILHA_H
#include <iostream>
#include "pilhaint.h"

using namespace std;

class fila2pilha{
    
    pilhaint p1;
    pilhaint p2;
    
public:
    fila2pilha(int tam_vetor);
    ~fila2pilha();
    bool insere(int x);
    bool remove(int &x);
    
};
#endif