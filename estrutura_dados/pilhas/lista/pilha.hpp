#ifndef __PILHA_HPP__
#define __PILHA_HPP__

template<class T>
class pilha {
  class item {
  public:
    T val;
    item *prox;

    item() {prox = NULL;}
    item(T val): val(val) {prox = NULL;}
  };
private:
 item *cel;

public:
  pilha();
  void empilhar(T obj);
  void desempilhar();
  T topo();
  bool ehvazia();
  int tamanho();
};

template<class T>
pilha<T>::pilha() {
  cel = NULL;
}

template<class T>
void pilha<T>::empilhar(T obj) {
  item *o = new item(obj);
  o->prox = cel;
  cel = o;
  return;
}

template<class T>
void pilha<T>::desempilhar() {
  item *o = cel;
  if(cel) {
    cel = cel->prox;
    delete o;
  }
  return;
}

template<class T>
T pilha<T>::topo() {
  T val = 0;
  if(cel) val = cel->val;
  return val;
}

template<class T>
bool pilha<T>::ehvazia() {
  return (cel ? false : true);
}

template<class T>
int pilha<T>::tamanho() {
  item *p = cel;
  int cont = 0;
  while (p) {
    p = p->prox;
    cont++;
  }
  return cont;
}

#endif // __PILHA_HPP__
