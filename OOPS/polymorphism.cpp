#include<iostream>
using namespace std;

//Function Overloading


class area
{
    public:

    int calculate_area(int r)
    {
        return (3.14*r*r);
    }

    //similar functions with similar parameters type are not supported

    int calculate_area(int l, int b)
    {

        return (l*b);
    }

};


int main()
{
    area a1,a2;
    cout<<a1.calculate_area(4)<<endl;
    cout<<a2.calculate_area(4,6);
    return 0;
}