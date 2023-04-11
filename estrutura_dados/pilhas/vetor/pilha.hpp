#ifndef __PILHA_HPP__
#define __PILHA_HPP__

#define TAMANHOPILHA 5
template<class T>
class pilha {
private:
  T itens[TAMANHOPILHA];
  int tam;

public:
  pilha() { tam = 0; }
  bool empilhar(T obj);
  bool desempilhar();
  T topo();
  bool ehvazia();
  int tamanho();
};

template<class T>
bool pilha<T>::empilhar(T obj) {
  bool ret = false;
  if(tam < TAMANHOPILHA) {
    itens[tam++] = obj;
    ret = true;
  }
  return ret;
}

template<class T>
bool pilha<T>::desempilhar() {
  bool ret=false;
  if(tam > 0) {
    tam--;
    ret=true;
  }
  return ret;
}

template<class T>
T pilha<T>::topo() {
  T val=0;
  if(tam > 0)
    val = itens[tam -1];
  return val;
}

template<class T>
bool pilha<T>::ehvazia() {
  return (tam ? false : true);
}

template<class T>
int pilha<T>::tamanho() {
  return tam;
}


#endif // __PILHA_HPP__
