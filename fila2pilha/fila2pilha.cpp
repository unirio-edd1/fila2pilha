//
//  fila2pilha.cpp
//  fila2pilha
//
//  Created by Diogo Martins on 3/30/15.
//  Copyright (c) 2015 Diogo Martins. All rights reserved.
//

#include <stdio.h>
#include "fila2pilha.h"

fila2pilha::fila2pilha(int tam_vetor): p1(tam_vetor), p2(tam_vetor){}

fila2pilha::~fila2pilha(){
    
}

bool fila2pilha::insere(int x){
    return p1.push(x);
}

bool fila2pilha::remove(int &x){
    int elemento;
    
    if (p2.vazia()){
        while(!p1.vazia()){
            p1.pop(elemento);
            p2.push(elemento);
        }
    }
    return p2.pop(x);
}