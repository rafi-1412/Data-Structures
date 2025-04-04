// Deadlock occurs when two or more processes are stuck, 
// each holding a resource while waiting for another, creating a cyclic dependency

#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

std::mutex m1;
std::mutex m2;

void thread1()
{
    m1.lock();
      // std::this_thread::sleep_for(std::chrono::seconds(1));        this makes the threads sleep once both started then it will cause deadlock 
    m2.lock();
    cout<<"Critical section of thread thread 1"<<endl;
    m1.unlock();
    m2.unlock();
}

void thread2()
{
    m2.lock();
      // std::this_thread::sleep_for(std::chrono::seconds(1));
    m1.lock();
    cout<<"Critical section of thread thread 2"<<endl;
    m2.unlock();
    m1.unlock();
}

int main()
{
    std::thread t1(thread1);
    std::thread t2(thread2);
    t1.join();
    t2.join();

    return 0;
}