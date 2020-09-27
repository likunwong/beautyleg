#include <iostream>

using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int value;
}

void insertToTree(Node *root, int value)
{
    if (root == NULL)
    {
        return;
    }
    if (root -> left != NULL && value < root -> value) 
    {
        return insertToTree(root -> left, value);
    }
    if (root -> right != NULL && value > root -> value)
    {
        return insertToTree(root -> right, value);
    }
    if (value < root -> value && root -> left == NULL)
    {
        root -> left = new Node{value: value};
        return 
    }
    if (value > root -> value && root -> right == NULL)
    {
        root -> right = new Node{value: value};
        return 
    }
}

void printTree(Node *root)
{
    std::cout << root->value << std::endl;
    printTree(root->left);
    printTree(root->right);
}
