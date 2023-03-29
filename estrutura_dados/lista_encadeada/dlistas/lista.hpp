#ifndef __LISTA_HPP__
#define __LISTA_HPP__

template<class T>
class celula {
public:
    T obj;
    celula *prox, *ant;
    celula();
    celula(T obj);
};

template<class T>
class lista {
private:
    celula<T>* cab, *cad;
public:
    lista();
    celula<T> *cabeca(), *cauda();
    celula<T> *busca(int pos);
    celula<T> *buscaR(int pos);
    void inserir(celula<T> *elemento, int pos);
    bool remover(int pos);
    bool ehVazia();
};

template<class T>
celula<T>::celula() {
  prox = ant = NULL;
}

template<class T>
celula<T>::celula(T obj): obj(obj) {
  prox = ant = NULL;
}

template<class T>
lista<T>::lista() {
  cab = cad = NULL;
};

template<class T>
celula<T> *lista<T>::cabeca() {
  return cab;
}

template<class T>
celula<T> *lista<T>::cauda() {
  return cad;
}

template<class T>
celula<T> *lista<T>::busca(int pos) {
  celula<T> *p = cab;
  int i = 0;
  while(i < pos && p != NULL) {
    p = p->prox; i++;
  }
  return p;
}

template<class T>
celula<T> *lista<T>::buscaR(int pos) {
  celula<T> *p = cad;
  int i = 0;
  while(i < pos && p != NULL) {
    p = p->ant; i++;
  }
  return p;
}


template<class T>
void lista<T>::inserir(celula<T> *elemento, int pos) {
  celula<T> *p;
  if(cab) { // lista não está vazia
    p = busca(pos);
    elemento->prox = p;
    if(p == cab) { // Inserir na 1°
      cab = elemento;
    } else {
      if(p) { // Inserir em uma posição que ja existe
        elemento->ant = p->ant;
        p->ant->prox = elemento;
        p->ant = elemento;
      } else {
        elemento->ant = cad;
        cad->prox = elemento;
        cad = elemento;
      }
    }
  } else {
    cab = elemento;
    cad = elemento;
  }
  return;
}

template<class T>
bool lista<T>::remover(int pos) {
  bool res = false;
  celula<T> *p;
  p = busca(pos);
  if(p) {
    res = true;
    if(p->ant) p->ant->prox = p->prox;
    else cab = p->prox;
    if(p->prox) p->prox->ant = p->ant;
    else cad = p->ant;
  }
  delete p;
  return res;
}

template<class T>
bool lista<T>::ehVazia() {
  return cab==NULL;
}

#endif // __LISTA_HPP__
