//Function overriding

#include<iostream>
#include<vector>
using namespace std;



class animal
{

    public:

    // virtual void speak()                      //function overriding concept
    // {
    //     cout<<"huhuhh"<<endl;
    // }


    virtual void speak()=0; 

    /*
        Pure virtual function

        virtual void speak()=0;   //abstract class - cannot creates direct object for this class

    */



};

class dog:public animal
{

    public:
    void speak()
    {
        cout<<"Bark bark"<<endl;
    }
};

class cat:public animal
{

    public:
    void speak()
    {
        cout<<"mew mew"<<endl;
    }
};

int main()
{
    // animal *p;       //p poniter points to animal type  value

    // p = new dog();     // allocation done at runtime in heap

    // p->speak();   // during complie it will print huuuhuhu   without virtual
    
    animal *p;

    vector<animal*>animals;

    animals.push_back(new dog());
    animals.push_back(new cat());
    // animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());


    for(int i=0;i<animals.size();i++)        /*    Bark bark
                                                mew mew
                                                huhuhh
                                                Bark bark
                                                mew mew   */
    {
        p = animals[i];

        p->speak();
    }
    
    
    
    
    return 0;
}