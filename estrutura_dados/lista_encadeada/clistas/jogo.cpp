#include <iostream>
#include <cstddef>
#include "lista.hpp"

using namespace std;

int main() {
  int n, k;
  lista l;
  cin >> n >> k;
  for(int i=n; i>0; i--) l.inserir(new celula(i),0);
  while(--n) {
    cout << "Contando:" << l.cabeca()->id;
    l.busca(k-1);
    cout << "  morreu: " << l.cabeca()->id << endl;
    l.remover(0);
  }
  cout << "Ganhador: " << l.cabeca()->id << endl;
  return 0;
}
