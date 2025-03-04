#include<iostream>
using namespace std;


// A friend class can access private and protected members of other classes in which it is declared as a friend. 
// It is sometimes useful to allow a particular class to access private and protected members of other classes.



// Like a friend class, a friend function can be granted special access to private and protected members of a class in C++. 
// They are not the member functions of the class but can access and manipulate the private and protected members of that class for they are declared as friends.



class time

{
    int distance,speed;

    public:
    time()
    {
        distance=40;
        speed=4;
    };

    void display()
    {
        cout<<distance/speed<<endl;
    }

    friend void alter_values(time &o1);  //prototype
};

void alter_values(time &a)
{
    a.distance=a.distance+60;
    a.speed+=1;
}


int main()
{
    time t1;
    t1.display();

    alter_values(t1);

    t1.display();
    return 0;
}