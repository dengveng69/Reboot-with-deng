#include <iostream>
#include <vector>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
    
    node(int val): data(val), left(nullptr), right(nullptr) {}
};

void traverse(node* root)
{
    if(root == nullptr)
    {
        return;
    }
    cout << root->data  << " ";
    traverse(root->left);
    traverse(root->right);
}

int search(int*,int,int,int)
{
    int pos = 0;
    
    return pos;
}

node* construnct(int* preorder, int* inorder, int start,int end)
{
    static int idx =0;
    int curr = preorder[idx];
    idx++;
    node* root = new node(curr);
    int pos = search(inorder, start, end, curr);
}

int main()
{
    node* root = nullptr;
    root = new node(5);
    root->left = new node(7);
    root->right = new node(8);

    root->left->right = new node(23);
    root->left->left = new node(27);

    root->right->left = new node(87);
    root->right->right = new node(72);

    traverse(root);

    int preorder[]= {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

   

    cout << endl;
    return 0;
}