#include<iostream>
using namespace std;

class node
{
      public:
          int data;
          node* prev;
          node* next;
          
      node(int val)
      {
        this->data=val;
        prev=nullptr;
        next=nullptr;
      }
      
    
};

class doubleList
{
    private:
          node* head;
          
    public:
            doubleList()
              {
                  head=nullptr;
              }
              
              ~doubleList()
              {
                  
                  while(head!=nullptr)
                  {
                      node* zombie=head;
                      head=head->next;
                      delete zombie;
                  }
              }
              
              
          
          void insert_at_begining(int data)
          {
              node* temp=new node(data);
              
              if(head==nullptr)
              {
                  
                //   temp->next=nullptr;
                  head=temp;
              }
              else
              {
              
              
                temp->next=head;
                head->prev=temp;
                head=temp;
                  
              }
              
          }
          
          void insert_at_end(int data)
          {
              node* temp=new node(data);
              
              if(head==nullptr)
              {
                  head=temp;
              }
              else
              {
                  node* dummy=head;
                  
                  while(dummy->next!=nullptr)
                  {
                      dummy=dummy->next;
                  }
                  
                  dummy->next=temp;
                  temp->prev=dummy;
              }
          }
          
          
          void display()
          {
              node* disp = head;
              
              while(disp!=nullptr)
              {
                  cout<<disp->data<<" <==> ";
                  disp=disp->next;
              }
              cout<<"NULL"<<endl;
          }
};


int main()
{
    doubleList dl;
    
    for(int i=8;i>=1;i--)
    {
        dl.insert_at_begining(i*i*i);
    }
    
    for(int i=0;i<3;i++)
    {
        dl.insert_at_end(i+1);
    }
    
    for(int i=1;i<4;i++)
    {
        
    }
    
    dl.display();
    cout<<"Exit...";
    
    return 0;
}