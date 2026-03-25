#include <iostream>
using namespace std;

class Employee{
    
    int empID;
    string name;
    double monthlySalary;

public:
    void inputDetails(){
        cout<<"Enter Employer ID: ";
        cin>>empID;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Monthly Salary: ";
        cin>>monthlySalary;
    }

    double calculateTotal(){
        return monthlySalary * 12.0;
    }

    void displayDetails(){
        cout<<"Annual Salary Is: "<<calculateTotal();
    }
};

int main(){
    Employee e;
    e.inputDetails();
    e.displayDetails();
}