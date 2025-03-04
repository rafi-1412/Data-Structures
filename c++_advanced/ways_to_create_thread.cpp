//Note:

//If we crate multiple threads at the same time it doesn't gurantee which one will start first

#include<iostream>
#include<thread>
using namespace std;

class parent{

    public:
    void operator ()(int x)                //here  operator () allows an object to be called like a function
    {
        cout<<"with functors"<<endl;
        while(x-- >0)
        {
            cout<<x<<endl;
        }
    }


    void run(int x)           //non-static member function
    {
        cout<<"with non-static member functions"<<endl;
        while(x-- >0)
        {
            cout<<x<<endl;
        }
    }


    static void check(int x)           //static member function
    {

        cout<<"with static member functions"<<endl;
        while(x-- >0)
        {
            cout<<x<<endl;
        }
    }



};


int main()
{

    //2.we can directly inject lambda at thread creation time.

    auto fun =[](int x){
      
      cout<<"With lambda functions"<<endl;

        while(x-- >0)
        {
            cout<<x<<endl;
        }
    };

    std::thread t(fun,10);                

    std::thread t1(parent(),10);          //3. functor ====> callable object

    parent obj;
    std::thread t2(&parent::run,&obj,10);     //  (address of function as its in class scope, address of obj as its non-static we need obj, parameter)

    std::thread t3(&parent::check,10);
 
    t.join();
    t1.join();
    t2.join();
    t3.join();

    return 0;
}