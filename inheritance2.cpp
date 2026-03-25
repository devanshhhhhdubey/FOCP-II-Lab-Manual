#include <iostream>
using namespace std;

class Account {
    protected:
    int accno;
    float balance;

    public:
    // Constructor
    Account(int a, float b) {
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
    // Constructor
    SavingsAccount(int a, float b, float r) : Account(a, b) {
        interestRate = r;
    }

    void calculateInterest() {
        float interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
    
};

int main() {
    SavingsAccount obj(510142342342, 5000, 5.0);

    obj.displayAccount();
    obj.calculateInterest();

    return 0;
}