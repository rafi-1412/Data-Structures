#include<iostream>
using namespace std;


template <class T1,class T2>          

auto getMax(T1 x,T2 y)
{
    return x>y?x:y;
}

// char getMax_char(char x, char y)
// {
//     return x>y?x:y;
// }

int main()
{
    int a=120,b=48;
    cout<<getMax(14.4,12)<<endl;
    cout<<getMax(14.4,122.8)<<endl;

    char c1='c',c2='u';
    cout<<getMax(c1,c2)<<endl;
    return 0;
}