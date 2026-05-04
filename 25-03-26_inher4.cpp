// inheritance practice question 4
// Create two classes: Employee with name, and Department with department name.
// Derive a class Manager that displays both employee name and department.
// Demonstrate usage through object creation.((Employee,Department)<-Manager)

#include <iostream>
using namespace std;

class Employee{
    protected:
    string name;
    public:
    Employee(){
        name="NA";
    }
    Employee(string n){
        name=n;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
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
