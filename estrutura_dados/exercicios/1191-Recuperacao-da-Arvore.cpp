#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char c;
    Node *l, *r;
};
typedef Node* BTree;

void makeNode(BTree &tree, char c)
{
	tree = new Node();
	tree -> c = c;
	tree -> l = tree -> r = NULL; 
}
void insert(BTree &tree, char c)
{   
    if(tree == NULL)
        makeNode(tree, c);
    else
    {
        if(c > tree -> c)
            insert(tree -> r, c);
        else
            insert(tree -> l, c);    
    }    
}
void post_order(BTree &tree)
{
    if(tree == NULL)
        return;
    post_order(tree -> l);
    post_order(tree -> r);
    printf("%c", tree -> c);    
}


int main()
{
    string s1, s2;
    while(cin >> s1 >> s2)
    {   
        BTree tree;
        makeNode(tree, s1[0]);
        for(int i = 1; i < s1.size(); i++)
            insert(tree, s1[i]);
        post_order(tree);
        printf("\n");    
    }
}