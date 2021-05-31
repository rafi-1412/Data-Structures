#include <bits/stdc++.h>
using namespace std;

class tree {
public:
  int data;
  tree *left;
  tree *right;
    tree(int d) {
        data = d;
        left = NULL;
        right = NULL;
  }
};

//Tree traversals using recursion
void display_preorder(tree* node)
{

  if(node==NULL)
  {
    return;
   }
    cout<<node->data<<" ";
    display_preorder(node->left);
    display_preorder(node->right);
}

void display_postorder(tree* node)
{

  if(node==NULL)
  {
    return;
  }
    display_postorder(node->left);
    display_postorder(node->right);
    cout<<node->data<<" ";
}

void display_inorder(tree *node) {
  if (node==NULL) {
    return;
    }
    display_inorder(node->left);
    cout << node->data << " ";
    display_inorder(node->right);
}

int main() {

  tree *head =new tree(1);
  head->left = new tree(2);
  head->right = new tree(3);
  head->left->left = new tree(4);
  head->left->right = new tree(5);
  head->right->left=new tree(6);
  head->right->right=new tree(7);
  cout<<"Inorder Traversal:";
  display_inorder(head);cout<<endl;
  cout<<"Preorder Traversal:";
  display_preorder(head);cout<<endl;
  cout<<"Postorder Traversal:";
  display_postorder(head);cout<<endl;
  return 0;
}