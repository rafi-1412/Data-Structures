#include<iostream>
#include<string>
using namespace std;

class student
{
  public:
      string name;
      int age;
      int roll;
  
  student()
  {
      name="Type your name here";
      age=0;
      roll=0;
  }
  
  student(string name,int age,unsigned int roll)
  {
      this->name=name;
      this->age=age;
      this->roll=roll;
  }
  
    student(string name,int age)
    {
        this->name=name;
        this->age=age;
        roll=101;
    }
    
    //inline constructor
    // inline student(string n,int a,int r):name(n),age(a),roll(r){}

//copy constructor

    student(const student &C)
    {
        name=C.name;
        age=C.age;
        roll=C.roll;
    }


    void display()
    {
        cout<<name<<endl<<age<<endl<<roll<<endl<<endl;
    }

};


int main()
{
    student s1;
    student s2("Peter",12,111);
    student s3("John",15);
    
    student s4;
    s4=s2;
    
    
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    
    return 0;
}