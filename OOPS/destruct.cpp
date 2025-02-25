#include<iostream>
using namespace std;

class student
{
    string name;
    int *age;
    
    public:
    student(string n,int a)
    {
        name=n;
        age = new int;
        *age=a;
    }
    
    ~student()
    {
        delete age;
        cout<<"\nMemory freed";
        
        //here freed from reverse order
    }
    
    void display()
    {
        cout<<name<<endl<<*age;
    }
    

    
};


int main()
{
    student s1("John",34);
    
    s1.display();
    return 0;
}