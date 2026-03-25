#include <iostream>
using namespace std;
class Student
{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    int calculateTotal() //getter
    {
        return marks1 + marks2 + marks3;
    }

public:
    void inputDetails()
{
    cout << "\n Enter Roll no: ";
    cin >> rollNo;

    cin.ignore();   // clears leftover newline

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Marks1, Marks2, Marks3: ";
    cin >> marks1 >> marks2 >> marks3;
}
    void displayDetails()
    {
        cout << "\n Name: " << name << "\n Roll No: " << rollNo << "\n Marks1: " << marks1 << "\n Marks2: " << marks2 << "\n Marks3: " << marks3 << "\n Total: " << calculateTotal();
    }
};

int main()
{
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}