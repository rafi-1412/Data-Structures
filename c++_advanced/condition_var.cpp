// Few important points to remember while using "condition variables" are as follows:
// 1. Condition variables allow us to synchronise threads via notifications.
//    a. notify_one();
//    b. notify_all();
// 2. You need mutex to use condition variable
// 3. Condition variable is used to synchronise two or more threads.
// 4. Best use case of condition variable is Producer/Consumer problem.
// 5. Condition variables can be used for two purposes:
//     a. Notify other threads
//     b. Wait for some condition

#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

using namespace std;

std::condition_variable cv;
std::mutex m;
long balance=0;

void addmoney(int amount)
{
    std::lock_guard<mutex> lg(m);       //parallely this thread will acquire the mutex and notify for those using condition variable "cv"
    balance+=amount;                    // once this mutex is released the thread withdrw money will acquire mutex
    cout<<"Amount "<<amount<<"credited successfuly"<<endl;
    cv.notify();
}

void withdrawmoney(int amount)
{
    std::unique_lock<mutex> ul(m);
    cv.wait(ul,[] {return (balance!=0)?true:false});            //   first it will lock m, and wait for condition to be true by releasing lock
    if(amount <= balance && amount!=0)                           // once thread 'addmoney' gets complete this will try to lock (once condition is true) and check for below operations
    {
        balance-=amount;
        cout<<"Amount "<<amount<<" Debited successfuly"<<endl;
    }
    else{
        cout<<"Please Enter valid amount"<<endl;
    }

    cout<<"Available balance "<<balance<<endl;


}

int main()
{
    std::thread t1(withdrawmoney,300);
    std::thread t2(addmoney,1000);
    t1.join();
    t2.join();
    return 0;
}