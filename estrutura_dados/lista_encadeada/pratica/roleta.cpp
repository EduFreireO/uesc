#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
    private:
        T obj;

    public:
    Node *next ;
    Node(T obj)
    {
        this -> obj = obj;
        next = NULL;
    }
    T get_value()
    {
        return obj;
    }
    
};

template <class T>
class List
{
    private:
        Node <T> *head;
    public:
   
    List() {}
    void insert(T obj);
    void print(); 
    void rm(int n);

};

int main()
{
    List <string> l;
    l.insert("Ed"); l.insert("Va"); l.insert("LAA"); l.insert("Osd");
    l.print();
    l.rm(2);
    
}


template <class T>
void List <T> :: insert(T obj)
{
    Node <T> *node = new Node(obj);
    Node <T> *p;
    if(!head)
    {
        head = node;
        return;
    }
    
    p = head;
    while(p -> next != head)
        p = p -> next;
    p -> next = node;
    p -> next -> next = head;
 
    
} 

template  <class T>
void  List <T> :: print()
{
    Node <T> *p = head;
    bool x = false;
    while(p)
    {
        if(p == head && x)
            break;
        cout << p -> get_value() << " ";
        p = p -> next;
        x = true; 
    }
}

template <class T>
void List <T> :: rm(int n)
{
    Node <T> *p = head, *erased;
    int before = n - 1, i = 0;
    while(len != 1)
    {
        while( i < before )    
        {    
            p = p -> next;
            i++;
        }
        erased = p -> next;
        p -> next = erased -> next;
        print(); printf("\n");   
       
    }
}

