#include<iostream>
#include<string>
using namespace std;

class customer          //Encapsulation Data(variables) & info(methods) into a single unit, as no direct acces of data to objects
{                       // Encapsulation is defined as binding together the data and the functions that manipulate them
    string name;
    int age;
    int balance=0;

    public:
    int append_data(string name,int age)
    {
        if(age<0 || age>120)               //conditions to verify entries, 
        {
            return 0;
        }
        else{
            this->age=age;
            this->name=name;
            return 1;
        }
    }

    void display()
    {
       cout<<name<<endl<<age<<endl<<balance<<endl; 
    }

};

int main()
{
    customer a1;
    if(a1.append_data("John",-4))
    {
        a1.display();
    }

    customer a2;
    if(a2.append_data("Peter",34)){ a2.display();    }
    
}