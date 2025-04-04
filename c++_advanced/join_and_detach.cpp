// JOIN Notes

// 1.once thread is started we wait for this thread to finish by calling join() function on thread object
// 2.Double join will result into program termination.
// 3.If needed we should check thread is joinable before joining (using joinable() function)


// Detach Notes
// 1.This is used to detach newly created thrread from the parent thread.
// 2.Always check before detaching a thread that it is joinable 
//     otherwise we may end up double detaching and double detach() will result into program 
//     termination
// 3.If we have detached thread and main function is returning then the detached thread execution is 
//   suspended.

// NOTES:
// Either join() or detach should be called on thread object, 
// otherwise during thread objects destructor it will terminate the program.
// Because inside destructor it checks if thread is still joinable? if yes then it will terminates program


#include<iostream>
#include<chrono>
#include<thread>


using namespace std;


void run(int count)
{
    while(count --> 0)
    {
        cout<<"you are in run"<<endl;
        // std::this_thread::sleep_for(chrono::seconds(5));
    }
}


int main()
{

    std::thread t1(run,10);
    cout<<"return to main"<<endl;
    t1.join();
    cout<<"completed -> main()";
    return 0;
}


// output:

// return to main
// you are in run
// you are in run
// you are in run
// you are in run
// you are in run
// you are in run
// you are in run
// you are in run
// you are in run
// you are in run      afte this it wait for few (5)seconds then it will come to completed -> main()
// completed -> main()