#include<iostream>
using namespace std;


class Engineer
{
    public:
    string specialization;

    void graduation()
    {
        cout<<"I have a specialization in "<<specialization<<endl;
    }

};

class youtuber
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
      string name;

    codeteacher(string name,string specialization,int subscribers)
    {
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
    }

    void display()
    {
        cout<<name<<endl<<specialization<<endl<<subscribers<<endl;

        graduation();

        contentcreator();
    }
};


int main()
{
    codeteacher a1("John","CSE",50000);\
    a1.display();
    return 0;
}