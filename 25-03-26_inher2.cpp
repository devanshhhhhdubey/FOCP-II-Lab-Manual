// inheritance practice question 2
// Create a class Account with account number and balance. Add a function
// displayAccount(). Derive a class SavingsAccount that includes interest rate and a
// function calculateInterest(). Demonstrate usage of both classes. (Account<-SavingsAccount)
#include <iostream>
using namespace std;

class Account {
    protected:
    int accno;
    float balance;

    public:

    Account(){
        cout<<"Default Constructor of Account"<<endl;
        accno = 0;
        balance = 0;
    }
    
    Account(int a, float b) {
        cout<<"Parameterized Constructor of Account"<<endl;
        accno = a;
        balance = b;
    }

    void displayAccount(){
        cout << "Account Number: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }           
};

class SavingsAccount : public Account {
    float interestRate;

    public:
    SavingsAccount() {
        cout<<"Default Constructor of SavingsAccount"<<endl;
        interestRate = 1;
    }
    
    SavingsAccount(int a, float b, float r) : Account(a, b) {
        cout<<"Parameterized Constructor of SavingsAccount"<<endl;
        interestRate = r;
    }

    void calculateInterest() {
        float interest = (balance * interestRate) / 100;
        cout << "Interest: " << interest << endl;
    }
    
};

int main() {
    SavingsAccount obj(510142342342, 5000, 5.0);

    obj.displayAccount();
    obj.calculateInterest();

    return 0;
}
