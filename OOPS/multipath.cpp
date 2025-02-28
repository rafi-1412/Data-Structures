#include<iostream>
using namespace std;

class human
{

    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }

};



class Engineer : public virtual human
{
    public:
    string specialization;

    void graduation()
    {
        cout<<"I have a specialization in "<<specialization<<endl;
    }

};

class youtuber : public virtual human
{
    public:
    int subscribers;

    void contentcreator()
    {
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};


class codeteacher:public Engineer,public youtuber
{
      public:
      int salary;

    codeteacher(string name,string specialization,int subscribers,int salary)
    {
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
        this->salary=salary;
    }

    // void display()
    // {
    //     cout<<name<<endl<<specialization<<endl<<subscribers<<endl;

    //     graduation();

    //     contentcreator();
    // }
};


int main()
{
    codeteacher a1("John","CSE",50000,10000);\
    a1.display();
    return 0;
}