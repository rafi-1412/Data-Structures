#include<iostream>
using namespace std;

class Node
{
  public:
      int data;
      Node* next;
  
  Node(int val)
  {
      data=val;
      next=nullptr;
  }
    
};



class LList
{
    private:
        Node* head;
    
    public:
        LList()
        {
            head=nullptr;
        }
        
    void insertatbegin(int d)
    {
        Node* temp =new Node(d);
        temp->next=head;
        head=temp;
    }
    
    void insertatend(int d)
    {
        Node* temp=new Node(d);
        Node* p=head;
        
        while(p->next!=NULL)
        {
            p=p->next;
        }
        
        p->next=temp;
        temp->next=nullptr;
    }
    
    void insertatpos(int d, int pos)
    {
        Node* temp=new Node(d);
        Node* p=head;
        for(int i=1;i<pos-1;i++)
        {
            p=p->next;
        }
        
        
        temp->next=p->next;
        p->next=temp;
    }
    
    void display()
    {
        Node* p =head;
        
        while(p)
        {
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<"null";
        
    }
    
    void deletion_at_begin()
    {
        Node* p=head;
        head=p->next;
        
        delete p;
        
    }
    
    void deletion_at_end()
    {
        
        Node* p=head;
        
        if(p->next == nullptr)
        {
            head=p->next;
            
            delete p;
        }
        else
        {
            while(p)
            {
                if(p->next->next == nullptr)
                {
                      break;
                }
                p=p->next;
    
            }
            
            Node* d=p->next;
            
            cout<<d->data<<"- Deleted"<<"\n";
            p->next=nullptr;
            
            delete d;
        }  
    }
    
    
    void deletion_at_pos(int pos)
    {
        Node*p =head;
        for(int i=1;i<pos-1;i++)
        {
            p=p->next;
        }
        
        Node* d=p->next;
        
        cout<<d->data<<"- Deleted \n";
        p->next=d->next;
        delete d;
        
    }
};

int main()
{
    LList llobj1;
    llobj1.insertatbegin(4);
    llobj1.insertatbegin(5);
    llobj1.insertatbegin(6);
    llobj1.insertatbegin(7);
    llobj1.insertatend(10);
    llobj1.insertatend(12);
    llobj1.insertatend(14);
    llobj1.insertatend(16);
    llobj1.insertatpos(100,4);
    llobj1.insertatpos(200,4);  //for pos 1 redirect to begin
    // llobj1.insertatpos(300,2);
    
    llobj1.deletion_at_begin();
    llobj1.deletion_at_begin();
    llobj1.deletion_at_end();
    llobj1.deletion_at_end();
    
    // for(int i=0;i<5;i++)
    // {
    //     llobj1.deletion_at_end();
    // }

    llobj1.deletion_at_end();
    
    llobj1.deletion_at_pos(3);
     llobj1.deletion_at_pos(4);
     llobj1.deletion_at_pos(2);

    
     
    
    
    llobj1.display();
    
    // llobj1.display();
    return 0;
}