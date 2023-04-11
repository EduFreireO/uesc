#ifndef __PILHA_H__
#define __PILHA_H__

#define TAMANHOPILHA 5
typedef int obj_t;
typedef int boolean;
enum{falso,verdade};

typedef struct pilha {
  obj_t itens[TAMANHOPILHA];
  int tamanho;
} pilha;

boolean empilhar(pilha *p, obj_t obj);
boolean desempilhar(pilha *p);
obj_t topo(pilha p);
boolean ehvazia(pilha p);
int tamanho(pilha p);

boolean empilhar(pilha *p, obj_t obj) {
  boolean ret = falso;
  if(p->tamanho < TAMANHOPILHA) {
    p->itens[p->tamanho++] = obj;
    ret = verdade;
  }
  return ret;
}


boolean desempilhar(pilha *p) {
  boolean ret=falso;
  if(p->tamanho > 0) {
    p->tamanho--;
    ret=verdade;
  }
  return ret;
}

obj_t topo(pilha p) {
  obj_t val=0;
  if(p.tamanho > 0)
    val = p.itens[p.tamanho -1];
  return val;
}

boolean ehvazia(pilha p) {
  return (p.tamanho ? falso : verdade);
}

int tamanho(pilha p) {
  return p.tamanho;
}


#endif // __PILHA_H__
