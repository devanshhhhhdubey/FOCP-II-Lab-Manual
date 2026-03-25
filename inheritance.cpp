#include <iostream>
#include <string>
using namespace std;
// always base class is called first then derived class
class Person {
    string name;
    int age;
    public:
    Person() {
        cout<<"\n person default constructor called";
        name = "default";
        age = 18;
    }

    Person(string nm, int ag) {
        cout<<"\n person parameterized constructor called";
        name=nm;
        age=ag;
    }
    
    void display() {
        cout << "\n name = " << name << "\n age = " << age << endl;
    }
};

class Student : public Person { // three modes: public, private, protected
   string rollno;
   public:
   Student() {
    cout<<"\n student default constructor called";
       rollno = "25csu358";
   }
   Student(string nm,int ag,string rno) : Person(nm,ag) { // initialization list
    cout<<"\n student parameterized constructor called";
       rollno = rno;
   }
   void display_student() {
       display();
       cout << "\n rollno = " << rollno;
   }
};

int main() {
    // Person p1;
    // Person p2("John", 25);

    Student s1,s2("abcd",20,"25csu358");
    s1.display_student();
    s2.display_student();
    
    // p1.display();
    // p2.display();

    
    return 0;
}