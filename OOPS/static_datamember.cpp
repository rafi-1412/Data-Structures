#include<iostream>
using namespace std;

class student
{
    string name;
    int age;
    static int student_count;
    
    public:
    
    student(string n,int a)
    {
        name=n;
        age=a;
        student_count++;
    }
    
    void display()
    {
        cout<<student_count;
    }
    
};

int student::student_count=0;


int main()
{   
    student s1("John",18);
    student s2("Peter",12);
    student s3("Peter",12);
    student s4("Peter",12);
    student s5("Peter",12);
    
    s5.display();  //5
    
    
    return 0;
}