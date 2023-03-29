#ifndef __LISTA_HPP__
#define __LISTA_HPP__
#include <cstddef> // NULL

class complexo {
public:
    double real;
    double imag;
    complexo *prox;
    complexo();
    complexo(double real, double imag);
};

class lista {
private:
    complexo* cab;
public:
    lista();
    complexo *cabeca();
    complexo *busca(int pos);
    void inserir(complexo *elemento, int pos);
    bool remover(int pos);
    bool trocar(int posA, int posB);
    bool ehVazia();
};

complexo::complexo() {
  real = 0; imag = 0; prox = NULL;
}

complexo::complexo(double real, double imag): real(real), imag(imag) {
  prox = NULL;
}

lista::lista() {
  cab = NULL;
};

complexo *lista::cabeca() {
  return cab;
}

complexo *lista::busca(int pos) {
  complexo *p = cab;
  int i = 0;
  while(i < pos && p != NULL) {
    p = p->prox; i++;
  }
  return p;
}

void lista::inserir(complexo *elemento, int pos) {
  complexo *a, *p;
  if(cab) { // lista não está vazia
    p = busca(pos);
    elemento->prox = p;
    if(p == cab) {
      cab = elemento;
    } else {
      a = cab;
      while(a->prox != p) a = a->prox;
      a->prox = elemento;
    }
  } else {
    cab = elemento;
  }
  return;
}

bool lista::remover(int pos) {
  bool res = false;
  complexo *p, *a;
  p = busca(pos);
  if(p) {
    res = true;
    if(p == cab) {
      cab = p->prox;
    } else {
      a = cab;
      while(a->prox!=p) a = a->prox;
      a->prox = p->prox;
    }
    delete p;
  }
  return res;
}

bool lista::trocar(int posA, int posB) {
  bool res = false;
  complexo *pb, *pa, *a;
  if(posA > posB) {
    posA ^= posB;
    posB ^= posA;
    posA ^= posB;
  }
  pb = busca(posB);
  if(pb && posB > posA) {
    res = true;
    a = cab;
    while(a->prox!=pb) a = a->prox;
    a->prox = pb->prox;
    inserir(pb,posA);
    pa = pb->prox;
    pb->prox = pa->prox;
    inserir(pa,posB);
  }
  return res;
}

bool lista::ehVazia() {
  return cab==NULL;
}

#endif // __LISTA_H__
