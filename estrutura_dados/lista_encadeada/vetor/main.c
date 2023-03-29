#include <stdio.h>
#include "lista.h"

void imprimir(lista l) {
    for(int i = 0; i<l.fim; i++)
        printf("%d..",l.elementos[i]);
    printf("\n");
    return;
}

int main() {
    lista l;
    l.fim = 0;

    if(ehVazia(l)) printf("Vazia\n");
    else printf("Não vazia\n");
    inserir(&l,1,0); imprimir(l);
    inserir(&l,2,0);
    inserir(&l,3,1); imprimir(l);
    remover(&l,0);
    inserir(&l,4,1); imprimir(l);
    if(ehVazia(l)) printf("Vazia\n");
    else printf("Não vazia\n");
    if(ehCheia(l)) printf("Cheia\n");
    else printf("Não cheia\n");
    remover(&l,3);
    inserir(&l,5,2);
    inserir(&l,6,4); imprimir(l);
    if(ehCheia(l)) printf("Cheia\n");
    else printf("Não cheia\n");
    inserir(&l,8,0);
    remover(&l,5); imprimir(l);
    remover(&l,4); imprimir(l);
    return 0;
}
