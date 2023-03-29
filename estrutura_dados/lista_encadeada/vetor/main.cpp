#include <iostream>
#include "lista.hpp"

using namespace std;

void imprimir(lista l) {
    for(int i = 0; i<l.fim; i++)
        cout << l.ler(i) << "..";
    cout << endl;
    return;
}

int main() {
    lista l;

    if(l.ehVazia()) cout << "Vazia" << endl;
    else cout << "Não vazia" << endl;
    l.inserir(1,0); imprimir(l);
    l.inserir(2,0);
    l.inserir(3,1); imprimir(l);
    l.remover(0);
    l.inserir(4,1); imprimir(l);
    if(l.ehVazia()) cout << "Vazia" << endl;
    else cout << "Não vazia" << endl;
    if(l.ehCheia()) cout << "Cheia" << endl;
    else cout << "Não cheia" << endl;
    l.remover(3);
    l.inserir(5,2);
    l.inserir(6,4); imprimir(l);
    if(l.ehCheia()) cout << "Cheia" << endl;
    else cout << "Não cheia" << endl;
    l.inserir(8,0);
    l.remover(5); imprimir(l);
    l.remover(4); imprimir(l);
    return 0;
}
