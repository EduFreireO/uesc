#include <iostream>
#include <cstddef>
#include "lista.hpp"

using namespace std;

void imprimir(lista<int> l) {
  celula<int> *p = l.cabeca();
  while(p!=NULL) {
    cout << p->obj << "..";
    p = p->prox;
  }
  cout << endl;
  return;
}


int main() {
  lista<int> l;
  if(l.ehVazia()) cout << "Lista vazia" << endl;
  else cout << "Não está vazia" << endl;
  celula<int> *elemento=NULL;
  elemento = new celula<int>(1);
  l.inserir(elemento,0);
  elemento = new celula<int>(2);
  l.inserir(elemento,3); imprimir(l);
  elemento = new celula<int>(3);
  l.inserir(elemento,1);
  elemento = new celula<int>(4);
  l.inserir(elemento,0); imprimir(l);
  elemento = l.busca(2); cout << "achou: " << elemento->obj << endl;
  elemento = l.buscaR(2); cout << "achou: " << elemento->obj << endl;
  l.remover(3); imprimir(l);
  return 0;
}
