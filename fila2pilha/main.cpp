#include <iostream>
#include <cstdlib>
#include "fila2pilha.h"

using namespace std;

int main()
{
    fila2pilha fila(30);
    int x;
    
    cout << "Testanto Insere Fila\n";
    fila.insere(1);
    fila.insere(2);
    fila.insere(3);
    fila.insere(4);
    
    cout << "Testanto remove da Fila\n";
    if (fila.remove(x))
        cout << "Retirado " << x << endl;
    
    if (fila.remove(x))
        cout << "Retirado " << x << endl;
    
    fila.insere(5);
    fila.insere(6);
    
    if (fila.remove(x))
        cout << "Retirado " << x << endl;
    
    if (fila.remove(x))
        cout << "Retirado " << x << endl;
    if (fila.remove(x))
        cout << "Retirado " << x << endl;
    if (fila.remove(x))
        cout << "Retirado " << x << endl;
    else cout << "Fila vazia" << endl;
    
    system("PAUSE");
    return 0;
}