#include <iostream>
#include <cstddef>
#include "lista.hpp"

using namespace std;

void imprimir(lista l) {
  complexo *p = l.cabeca();
  while(p!=NULL) {
    cout << p->real << "+i" << p->imag << "..";
    p = p->prox;
  }
  cout << endl;
  return;
}


int main() {
  lista l;
  if(l.ehVazia()) cout << "Lista vazia" << endl;
  else cout << "Não está vazia" << endl;
  complexo *elemento=NULL;
  elemento = new complexo(1,2);
  l.inserir(elemento,0);
  elemento = new complexo(2,3);
  l.inserir(elemento,3); imprimir(l);
  elemento = new complexo(3,4);
  l.inserir(elemento,1);
  elemento = new complexo(4,5);
  l.inserir(elemento,0); imprimir(l);
  l.remover(3); imprimir(l);
  l.trocar(0,2); imprimir(l);
  return 0;
}
