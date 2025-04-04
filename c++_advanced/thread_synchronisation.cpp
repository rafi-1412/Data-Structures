// Few important points to remember for "Thread OR Process Synchronisation" is as follows:
// 1.0 Thread Or Process synchronize to access critical section.
// 2.0 Critical section is one or collection of program statements which should be executed by only one thread or process at a time.
// If there is any doubt regarding the video, please let me know in the comment section i would definitely try to solve it.


#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

std::mutex m;

long long balance =0;

void addmoney(long long val)
{ 
    m.lock();                 // either of one thread will acquire a lock and access critical section and unlocks so that other thread will acquire lock and access critical section 
                            // so basically this is synchronisation of threads.
    balance+=val;
    m.unlock();
}

int main()
{
    std::thread t1(addmoney,100);
    std::thread t2(addmoney,400);
    
    t1.join();
    t2.join();
    
    cout<<balance;
    return 0;
}
