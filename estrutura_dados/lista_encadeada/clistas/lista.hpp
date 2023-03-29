#ifndef __LISTA_HPP__
#define __LISTA_HPP__
#include <cstddef> // NULL

class celula {
public:
    int id;
    celula *prox;
    celula();
    celula(int n);
};

class lista {
private:
    celula* cab;
public:
    lista();
    celula *cabeca();
    celula *busca(int pos);
    void inserir(celula *elemento, int pos);
    bool remover(int pos);
    bool ehVazia();

};

celula::celula() {
  id = 0; prox = NULL;
}

celula::celula(int n): id(n) {
  prox = NULL;
}

lista::lista() {
  cab = NULL;
};

celula *lista::cabeca() {
  return cab;
}

celula *lista::busca(int pos) {
  celula *p = cab;
  int i = 0;
  while(i < pos && p != NULL) {
    p = p->prox; i++;
  }
  cab = p;
  return p;
}

void lista::inserir(celula *elemento, int pos) {
  celula *a, *p;
  if(cab) { // lista não está vazia
    p = busca(pos);
    elemento->prox = p;
    a = p;
    while(a->prox != p) a = a->prox;
    a->prox = elemento;
    cab = elemento;
  } else {
    cab = elemento;
    cab->prox = cab;
  }
  return;
}

bool lista::remover(int pos) {
  bool res = false;
  celula *p, *a;
  p = busca(pos);
  if(p) {
    res = true;
    a = p;
    while(a->prox!=p) a = a->prox;
    if(a != p) {
      a->prox = p->prox;
      cab = p->prox;
    }
    else cab = NULL;
    delete p;
  }
  return res;
}

bool lista::ehVazia() {
  return cab==NULL;
}

#endif // __LISTA_H__
