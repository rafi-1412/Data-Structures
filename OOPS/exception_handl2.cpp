// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {


    int a=4,b=0,c;
    try
    {
        if(b==0)
        {
            throw "b equals zero, division not possible!!!!";
            return 0;
        }
        
        c=a/b;
        cout<<c;
    }
    catch(const char *e)
    {
        cout<<"Exception occured : "<<e;
    }
    
    
}