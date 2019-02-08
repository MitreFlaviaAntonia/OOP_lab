#include <iostream>
using namespace std;
class Account {
public:
 Account( double d ) { _balance = d; }
 virtual double GetBalance() { return _balance; }
 virtual void test() { cout<<"Account test"<<endl; } //not so usefull for test()
 template <typename T>
    Account& operator<<(const T& x)
    {
        std::cout << x;

        return *this;
    }
    // this is the type of std::cout
    typedef std::basic_ostream<char, std::char_traits<char> > CoutType;

    // this is the function signature of std::endl
    typedef CoutType& (*StandardEndLine)(CoutType&);

    // define an operator<< to take in std::endl
    Account& operator<<(StandardEndLine manip)
    {
        // call the function, but we cannot return it's value
        manip(std::cout);

        return *this;
    }
 Account PrintBalance() { cerr << "Error. Balance not available for base type." << endl; }
private:
 double _balance; // another naming convention for private variables
};
class CheckingAccount : public Account {
public:
 CheckingAccount(double d) : Account(d) {}
 void test() { cout<<"CheckingAccount test"<<endl; } //not so useful for test()
 CheckingAccount PrintBalance() { cout << "Checking account balance: " << GetBalance() << endl; }
};
class SavingsAccount : public Account {
public:
 SavingsAccount(double d) : Account(d) {}
 void test() { cout<<"SavingsAccount test"<<endl; } //not so useful for test()
 SavingsAccount PrintBalance() { cout << "Savings account balance: " << GetBalance() << endl; }
 // NO IMPLEMENTATION FOR PrintBalance.. THE METHOD FROM BASE CLASS IS USED
 //void PrintBalance() { cout << "Savings account balance: " << GetBalance() << endl; }
};
int main() {
 CheckingAccount *pChecking = new CheckingAccount( 100.00 ) ;
 SavingsAccount *pSavings = new SavingsAccount( 1000.00 );

 pChecking->PrintBalance()<<endl; // eroare
 pSavings->PrintBalance()<<endl; // eroare
 Account *pAccount;
 pAccount = pChecking;
 pAccount->PrintBalance();
 pAccount->test(); //not so useful for test()
 // Call PrintBalance using a pointer to Account.
 pAccount = pSavings;
 pAccount->PrintBalance();
 pAccount->test();

}
