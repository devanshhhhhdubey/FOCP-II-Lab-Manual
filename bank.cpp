#include <iostream>
using namespace std;
class BankAccount
{
    string accountHolderName;
    int accountNumber;
    double balance;

    public:
    void inputDetails();
    void displayDetails();
    void deposit(double amount);
    void withdraw(double amount);
};
// declaring methods outside the class, using BankAccount:: so this is how they differ from functions
void BankAccount::inputDetails(){
    cout<<"Enter account number: ";
    cin>>accountNumber;
    cout<<"\n Enter account holder name: ";
    cin.ignore();
    getline(cin,accountHolderName);
    cout<<"\n Enter balance: ";
    cin>>balance;
}

void BankAccount::deposit(double amount){
    balance+=amount;
    cout<<"\n Amount deposited \n Balance = "<<balance;
}

void BankAccount::withdraw(double amount){
    if(amount>balance){
        cout<<"\n Denied....Insufficient balance";
    }
    else{
    balance-=amount;
    cout<<"\n Amount withdrawn \n Balance = "<<balance;
    }
}

void BankAccount::displayDetails(){
    cout<<"\n Account number: "<<accountNumber;
    cout<<"\n Account Holder Name: "<<accountHolderName;
    cout<<"\n Balance: "<<balance;
}

int main(){
    BankAccount a1;
    a1.inputDetails();
    char choice;
    cout<<"\n D for deposit and W for withdrawal :";
    cin>>choice;

    if(choice=='D' || choice=='d'){
        a1.deposit(5000);
    }
    if(choice=='W' || choice=='w'){
        a1.withdraw(4000);
    }

    a1.displayDetails();
    return 0;
}