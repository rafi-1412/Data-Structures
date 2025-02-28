#include<iostream>
using namespace std;


class student
{

public:

void student_display()
{
    cout<<"I am student "<<endl;
}

};

class male
{

    public:

    void print_male()
    {
        cout<<"I am a male"<<endl;
    }
};


class female
{

    public:

    void print_female()
    {
        cout<<"I am a female"<<endl;
    }
};

class boy: public student,public male
{

    public:
    void boy_display()
    {

        cout<<"I am a boy"<<endl;
    }
};


class girl:public student,public female
{

    public:
    void girl_display()
    {
        cout<<"I am a girl"<<endl;
    }

};



int main()
{
    girl a1;
    // a1.girl_display();
    // a1.student_display();
    // a1.print_female();

    boy b1;
    b1.student_display();
    b1.print_male();
    

    return 0;
}