#include<iostream>
using namespace std;

class complex
{
    int real,img;

    public:

    complex()
    {

    };
    
    complex(int real, int img)
    {
        this->real=real;
        this->img=img;
    };

    complex operator +(complex &C)
    {
        complex ans;
        ans.real=real+C.real;
        ans.img=img+C.img;

        return ans;
    }


    void display()
    {
       cout<<real<<" +i"<<img<<endl; 
    }

};


int main()
{   
    complex c1(5,4);
    complex c2(3,6);

    complex c3=c1+c2;

    c3.display();

    return 0;
}