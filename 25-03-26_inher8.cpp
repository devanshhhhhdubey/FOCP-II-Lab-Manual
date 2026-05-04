// inheritance practice question 8
// Create a class Employee with name and salary. Derive two classes Developer and
// Designer, each having a function displayRole(). Demonstrate how both classes inherit
// common properties and define their own behaviour.
// (EmployeeDeveloper , EmployeeDesigner)

#include <iostream>
using namespace std;

class Employee{
    protected:
    string name;
    float salary;
    public:
    Employee(){
        name="NA";
        salary=0;
    }
    Employee(string n, float s){
        name=n;
        salary=s;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Department{
    protected:
    string department;
    public:
    Department(){
        department="NA";
    }
    Department(string d){
        department=d;
    }
    void display(){
        cout<<"Department: "<<department<<endl;
    }
};

class Manager : public Employee, public Department{
    public:
    Manager() : Employee(), Department() {}

    Manager(string n, string d) : Employee(n), Department(d) {}

    void display(){
        Employee::display();
        Department::display();
    }
};
int main(){
    Manager m("Peter", "IT");
    m.display();
    return 0;
}
