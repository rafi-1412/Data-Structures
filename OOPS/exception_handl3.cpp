// Online C++ compiler to run C++ program online
#include <iostream>
// #include<exception>

using namespace std;


int main() {

    try{
        int *p= new int[10000000000000000];
        throw "Memory allocated successfully";
        delete []p;
    }
    
    catch(const exception &e)
    {
        cout<<"Exception occured : "<<e.what();
    }
    return 0;
}