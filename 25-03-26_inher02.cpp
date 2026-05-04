// inheritance practice question 2
#include<iostream>
using namespace std;

class Account{
    string account_no;
    protected:
    float balance;
    public:
    Account(){
        cout<<"\n default constructor";
        account_no="NA";
        balance=0;
    }
    Account(string accno,float bal){
        cout<<"\n Parametarized account";
        account_no=accno;
        balance=bal;
    }
    void displayAccount(){
        cout<<"\n Account Number: "<<account_no;
        cout<<"\n Account Balance: "<<balance;
    }
};

class SavingsAccount:public Account{
    float int_rate;
    public:
    SavingsAccount(){
        cout<<"\n Default SA";
        int_rate=1;
    }
    SavingsAccount(string ano,float bal,float ir):Account(ano,bal){
        cout<<"\n Parametarised SA";
        int_rate=ir;
    }
    void calculateInterest(){
        cout<<"\n Your Account details";
        displayAccount();
        cout<<"\n Balance post interest rate: "<<(balance*int_rate)/100;
    }
};

int main(){
    SavingsAccount sa1;
    sa1.calculateInterest();
    SavingsAccount sa2("243781428", 8000, 3);
    sa2.calculateInterest();
    return 0;
}