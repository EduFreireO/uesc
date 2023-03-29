#ifndef __LISTA_H__
#define __LISTA_H__
#include <stdlib.h>
#include <malloc.h>

typedef struct complexo_s {
    double real;
    double imag;
    struct complexo_s *prox;
} complexo;

complexo *criar(double real, double imag);
complexo *busca(complexo *lista, int pos);
complexo *inserir(complexo *lista, complexo *elemento, int pos);
complexo *remover(complexo *lista, int pos);
complexo *trocar(complexo *lista, int posA, int posB);


complexo *criar(double real, double imag) {
  complexo *elemento = malloc(sizeof (complexo));
  elemento->real = real;
  elemento->imag = imag;
  elemento->prox = NULL;
  return elemento;
}

complexo *busca(complexo *lista, int pos) {
  complexo *p = lista;
  int i = 0;
  while(i < pos && p != NULL) {
    p = p->prox; i++;
  }
  return p;
}

complexo *inserir(complexo *lista, complexo *elemento, int pos) {
  complexo *a, *p;
  if(lista) {
    p = busca(lista,pos);
    elemento->prox = p;
    if(p == lista) {
      lista = elemento;
    } else {
      a = lista;
      while(a->prox != p) a = a->prox;
      a->prox = elemento;
    }
  } else {
    lista = elemento;
  }
    return lista;
}

complexo *remover(complexo *lista, int pos) {
  complexo *p, *a;
  p = busca(lista,pos);
  if(p) {
    if(p == lista) {
      lista = p->prox;
    } else {
      a = lista;
      while(a->prox!=p) a = a->prox;
      a->prox = p->prox;
    }
    free(p);
  }
  return lista;
}

complexo *trocar(complexo *lista, int posA, int posB) {
  complexo *pb, *pa, *a;
  if(posA > posB) {
    posA ^= posB;
    posB ^= posA;
    posA ^= posB;
  }
  pb = busca(lista,posB);
  if(pb && posB > posA) {
    a = lista;
    while(a->prox!=pb) a = a->prox;
    a->prox = pb->prox;
    lista = inserir(lista,pb,posA);
    pa = pb->prox;
    pb->prox = pa->prox;
    lista = inserir(lista,pa,posB);
  }
  return lista;
}

#endif // __LISTA_H__
