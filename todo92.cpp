#include <iostream>
using namespace std;
class Account {
public:
 Account( double d ) { _balance = d; }
 virtual double GetBalance() { return _balance; }
 virtual void test() { cout<<"Account test"<<endl; }
 virtual void PrintBalance() = 0;
private:
 double _balance;
};
void Account::PrintBalance(){
 cerr << "Error. Balance not available for base type." << endl;
}
class CheckingAccount : public Account {
public:
 CheckingAccount(double d) : Account(d) {}
 void test() { cout<<"CheckingAccount test"<<endl; }
 void PrintBalance() { cout << "Checking account balance: " << GetBalance() << endl; }
};
class SavingsAccount : public Account {
public:
 SavingsAccount(double d) : Account(d) {}
 void test() { cout<<"SavingsAccount test"<<endl; }
 void PrintBalance() { cout << "Savings account balance: " << GetBalance() << endl; }
};
int main() {

 Account *pAccount;

 CheckingAccount *pChecking = new CheckingAccount( 100.00 ) ;
 pAccount = pChecking;
 pAccount->PrintBalance()<<endl;
 pAccount->test();

 SavingsAccount *pSavings = new SavingsAccount( 1000.00 );
 pAccount = pSavings;
 pAccount->PrintBalance();
 pAccount->test();
}
