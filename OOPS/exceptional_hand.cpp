#include<iostream>
using namespace std;


class InvalidAmountError : public runtime_error
{
    protected:
    string msg;

    public:
    InvalidAmountError(const string &msg):runtime_error(msg)
    {

    };

};

class  InsuffucuentBalanceError: public runtime_error
{
    protected:
    string msg;

    public:
    InsuffucuentBalanceError(const string &msg):runtime_error(msg)
    {

    };

};




class customer
{
    string name;
    int balance,account_number;


    public:
    
    customer(string name,int balance,int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }


    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;

            cout<<amount<<"rs credited successfully\n";
        }
    }

    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" rs is debited successfully\n";
        }

        else if(amount<0)
        {
            throw InvalidAmountError("Amount should should not be less (<0)");
        }

        else
        {
            throw InsuffucuentBalanceError("Balance is low");
            
        }
    }
};

int main()
{
    customer c1("John",5000,10);
    
    try{
    c1.deposit(100);
    c1.withdraw(6000);
    }                                 

    catch(const InsuffucuentBalanceError &e)
    {
        cout<<"Exception occured : "<<e.what();
    }

    catch(const InvalidAmountError &e)
    {
        cout<<"Exception occured : "<<e.what();
    }

    catch(...)
    {
        cout<<"Exception occured";
    }
    return 0;
}