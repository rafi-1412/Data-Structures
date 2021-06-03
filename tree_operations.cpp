#include<bits/stdc++.h> 
using namespace std;
class tree{

    public:
    int data;
    tree* left;
    tree* right;

    tree(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }

};
int largest_elem(tree* root)
{
    int max_left,max_right,max=INT_MIN;
    if(root!=NULL)
{
        max_left=largest_elem(root->left);
        max_right=largest_elem(root->right);
        if(max_left>max_right)
        {
            max=max_left;
        }
        else
        {
            max=max_right;
        }

        if(root->data>max)
        {
            max=root->data;
        }
}

return max;
}

bool search_in_tree(tree* node,int key)
{  
    bool id=false;
    tree* temp;
    queue<tree*>q;                      //level order traversal method also used for maximum element and also for searching in tree
    q.push(node);
    while(!q.empty())
    {
      temp=q.front();
      q.pop();
      if(key==temp->data)
      {
        id=true;
      }
      if(temp->left)
      {
        q.push(temp->left);
      }
      if(temp->right)
      {
        q.push(temp->right);
      }
    }
    return id;
}


int main() {

  tree *head = new tree(1);
  head->left = new tree(2);
  head->right = new tree(21);
  head->left->left = new tree(22);
  head->left->right = new tree(5);
  head->right->left = new tree(13);
  head->right->right = new tree(7);
  int ans=largest_elem(head);
  cout<<ans;
  if(search_in_tree(head,7))
      {
        cout<<"\nElement found";
      }
    else 
      cout<<"\nElement not found";
return 0;
}
