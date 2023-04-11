#include <iostream>
#include "pilha.hpp"

using namespace std;
int main() {
  pilha<int> p;
  p.empilhar(5); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.empilhar(4); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.empilhar(3); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.empilhar(2); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.empilhar(1); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.desempilhar(); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.empilhar(7); cout << p.tamanho() << " --> " << p.topo() << endl;;
  p.empilhar(8); cout << p.tamanho() << " --> " << p.topo() << endl;;
  while(!p.ehvazia()) {
    p.desempilhar(); cout << p.tamanho() << " --> " << p.topo() << endl;;
  } return 0;
}
