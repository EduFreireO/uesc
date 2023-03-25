#include <bits/stdc++.h>
using namespace std;


class Node
{
    public:
    
    Node *left, *right;
    int data;
    
    Node(int data)
    {
        this-> data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BTree
{
    public:
        Node *root;
        int size = 0;
        BTree():  root(nullptr), size(0){}
        void addNode(int value)
        {
            Node *new_node = new Node(value);
            if(root == nullptr)
                root = new_node;
            else
            {
                Node *node = root, *parent;
                while(true)
                {   
                    parent = node;
                    if(node -> data > value )
                    {    
                        node = node -> left;
                        if(node == nullptr) 
                        {
                            parent -> left = new_node;
                            break;
                        }
                    }
                    else
                    {
                        node = node -> right;
                        if(node == nullptr)
                        {
                            parent -> right = node;
                            break;
                        }
                    }       
                }
                

            }    
        }
        void preOrderTraversal(Node *node)
        {
            if(node != nullptr)
            {
                cout << node -> data << " ";
                preOrderTraversal(node -> left);
                preOrderTraversal(node -> right);
            }
        }
};

int main() {
  BTree tree;
  
  tree.addNode(50);
  tree.addNode(25);
  tree.addNode(75);
  tree.addNode(12);
  tree.addNode(37);
  tree.addNode(43);
  tree.addNode(30);
  
  tree.preOrderTraversal(tree.root);
  
  return 0;
}