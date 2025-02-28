#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;

    public:
    void introduce()
    {
        cout<<"Hello my name is: "<<name<<endl;
    }
};

class employee:public person
{
    protected:
    int salary;

    public:

    employee(int salary)
    {
        this->salary=salary;
    }

    void montly_salary()
    {
        cout<<"My salary is"<<salary<<endl;
    }

};

class manager:public employee
{
    public:
    string department;

    public:
    manager(string name,int age,int salary,string department):employee(salary)
    {
        this->name=name;
        // this->salary=salary;
        this->age=age;
        this->department=department;
    }

    void work()
    {
        cout<<"Iam working in "<<department<<endl;
    }

};

int main()
{
    manager A("John",32,1000,"Finance");
    A.montly_salary();
    A.work();
    return 0;
}