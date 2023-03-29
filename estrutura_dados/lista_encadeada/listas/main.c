#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void imprimir(complexo *lista) {
  complexo *p = lista;
  while(p!=NULL) {
    printf("%1.0lf+i%1.0lf..",p->real,p->imag);
    p = p->prox;
  }
  printf("\n");
  return;
}


int main() {
  complexo *lista = NULL, *elemento = NULL;
  elemento = criar(1,2);
  lista = inserir(lista,elemento,0);
  elemento = criar(2,3);
  lista = inserir(lista,elemento,3); imprimir(lista);
  elemento = criar(3,4);
  lista = inserir(lista,elemento,1);
  elemento = criar(4,5);
  lista = inserir(lista,elemento,0); imprimir(lista);
  lista = remover(lista,3); imprimir(lista);
  lista = trocar(lista,0,2); imprimir(lista);
  return 0;
}
