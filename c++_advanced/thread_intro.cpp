// Syntax:
// thread thread_object (callable);     
// thread is the thread class that represents a single thread in C++. 
// To start a thread we simply need to create a new thread object and pass the executing code to be called 
// (i.e, a callable object) into the constructor of the object. 
// Once the object is created a new thread is launched which will execute the code specified in callable. 
// A callable can be any of the five:

// A Function Pointer
// A Lambda Expression
// A Function Object
// Non-Static Member Function
// Static Member Function



#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull even_sum=0,odd_sum=0;

void findEven(ull start,ull end)
{
    for(ull i=start;i<=end;i++)
    {
        if((i&1)==0)
        {
            even_sum+=i;
        }
    }
}

void findOdd(ull start,ull end)
{
    for(ull i=start;i<=end;i++)
    {
        if((i&1)==1)
        {
            odd_sum+=i;
        }
    }
}

int main()
{   
    ull start=0,end=1900000000;

    auto starttime = high_resolution_clock::now();

    std::thread t1(findEven,start,end);
    std::thread t2(findOdd,start,end);

    t1.join();
    t2.join();

    // findOdd(start,end);
    // findEven(start,end);

    auto stoptime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stoptime-starttime);
    cout<<"ODD sum: "<<odd_sum<<endl;
    cout<<"Even sum: "<<even_sum<<endl;

    cout<<"Sec: "<<duration.count()/1000000<<endl;
    return 0;
}