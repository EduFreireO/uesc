#include <bits/stdc++.h>
#define QTD 10
using namespace std;


struct Node
{
	int v;
	Node *left, *right;
};
typedef Node* BTree;

void makeNode(BTree &tree, int value)
{
	tree = new Node();
	tree -> v = value;
	tree -> left = tree -> right = NULL; 
}

void insert(BTree &tree, int value)
{
	if(tree == NULL)
		makeNode(tree, value);
	else
	{
		if(value > tree -> v)
			insert(tree -> right, value);
		else
			insert(tree -> left, value);	

	}
}

void dfs(BTree tree)
{
	// Processa Node
	if(tree == NULL)
		return;
	dfs(tree -> left);
	dfs(tree -> right);	
}