#ifndef __LISTA_HPP__
#define __LISTA_HPP__

#define N 5

class lista {
private:
    int elementos[N];
public:
    int fim;
    lista() { fim = 0;}
    lista(int);
    bool inserir(int val, int pos);
    bool remover(int pos);
    int ler(int pos);
    bool ehVazia();
    bool ehCheia();
    /* Curiosidade .. poderíamos sobrepor o operador []
     * Neste caso a atribuição seria o inserir
     * E a leitura o ler
     */
};

lista::lista(int n): fim(n) {
    int i;
    for(i=0; i<fim; i++) elementos[i] = 0;
}

bool lista::inserir(int val, int pos) {
    bool retval = false;
    int i;
    if(!ehCheia() && pos <= fim) {
        for(i = fim -1; i>=pos; i--)
            elementos[i+1]=elementos[i];
        fim++;
        elementos[pos] = val;
        retval = true;
    }
    return retval;
}

bool lista::remover(int pos) {
    bool retval = false;
    int i;
    if(!ehVazia() && pos < fim) {
        fim--;
        for(i = pos; i < fim; i++)
            elementos[i] = elementos[i+1];
        retval = true;
    }
    return retval;
}

int lista::ler(int pos) {
    return elementos[pos];
}

bool lista::ehVazia() {
    return fim == 0;
}

bool lista::ehCheia() {
    return fim == N;
}

#endif // __LISTA_HPP__
