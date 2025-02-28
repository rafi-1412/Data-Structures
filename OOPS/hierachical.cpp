#include<iostream>
using namespace std;

class human
{
    string religion,color;
    protected:
    string name;
    int age,weight;


    public:

    human(string name,int age,int weight)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
    }

};

class student: private human
{

    private:
    int roll_number,fees;

    public:

    student(string name,int age,int weight,int roll_number,int fees): human(name,age,weight)
    {
        // this->name=name;
        // this->age=age;
        // this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees;
    }
};

class teacher:public human
{
    int salary,id;

    public:
    teacher(string name,int age,int weight):human(name,age,weight)
    {
        // this->name=name;
        // this->age=age;
        // this->weight=weight; 
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<weight;
    }

};

int main()
{
    student a("John",12,45,1111,10000);
    a.display();
    teacher t("Ramesh",45,85);
    t.display();
    
    return 0;
}