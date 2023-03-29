#ifndef __LISTA_H__
#define __LISTA_H__

#define N 5

typedef struct lista_s {
    int elementos[N];
    int fim;
} lista;

int inserir(lista *l, int val, int pos);
int remover(lista *l, int pos);
int ler(lista l, int pos);
int ehVazia(lista l);
int ehCheia(lista l);


int inserir(lista *l, int val, int pos) {
    int retval = 0;
    int i;
    if(!ehCheia(*l) && pos <= l->fim) {
        for(i = l->fim -1; i>=pos; i--)
            l->elementos[i+1]=l->elementos[i];
        l->fim++;
        l->elementos[pos] = val;
        retval = 1;
    }
    return retval;
}

int remover(lista *l, int pos) {
    int retval = 0;
    int i;
    if(!ehVazia(*l) && pos < l->fim) {
        l->fim--;
        for(i = pos; i < l->fim; i++)
            l->elementos[i] = l->elementos[i+1];
        retval = 1;
    }
    return retval;
}

int ler(lista l, int pos) {
    return l.elementos[pos];
}

int ehVazia(lista l) {
    return l.fim == 0;
}

int ehCheia(lista l) {
    return l.fim == N;
}

#endif // __LISTA_H__
