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
return 0;
}
