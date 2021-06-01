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
void display_inorder(tree* node)
{
    stack<tree*>a;
    tree* p=node;
    while(p!=NULL || a.empty()==false)
    {
      while(p!=NULL)
      {
          a.push(p);
          p=p->left;
      }
      p = a.top();
      a.pop();
      cout << p->data << " ";
      p = p->right;
  }
    
}

void display_preorder(tree* node)
{
  stack<tree *> a;
  tree *p = node;
  while (p != NULL || a.empty() == false) {
    while (p != NULL) {
      cout<<p->data<<" ";
      a.push(p);
      p = p->left;
    }
    p = a.top();
    a.pop();
    p = p->right;
  }

}
void display_postorder(tree* node)
{
  //using two stacks
  stack<tree*>s1;
  stack<tree*>s2;
  s1.push(node);
  tree* temp;
  while(!s1.empty())
  {
    temp=s1.top();
    s1.pop();
    s2.push(temp);
    if(temp->left){
      s1.push(temp->left);
    }
    if(temp->right)
    {
      s1.push(temp->right);
    }
  }
  while(!s2.empty())
  {
    temp=s2.top();
    cout<<temp->data<<" ";
    s2.pop();
  }


}

void display_levelorder(tree* node)
{ 
  // using as queue
  queue<tree*>q;
  q.push(node);
  tree* temp;
  while(!q.empty())
  {
    temp=q.front();
    cout<<temp->data<<" ";
    q.pop();
    if(temp->left)
      q.push(temp->left);
    if(temp->right)
      q.push(temp->right);
  }
}
  
int main() {

  tree *head = new tree(1);
  head->left = new tree(2);
  head->right = new tree(3);
  head->left->left = new tree(4);
  head->left->right = new tree(5);
  head->right->left = new tree(6);
  head->right->right = new tree(7);
  cout << "Inorder Traversal:";
  display_inorder(head);
  cout << endl;
  cout << "Preorder Traversal:";
  display_preorder(head);
  cout << endl;
  cout << "Postorder Traversal:";
  display_postorder(head);
  cout<<endl;
  cout << "Levelorder Traversal:";
  display_levelorder(head);
  return 0;
}
