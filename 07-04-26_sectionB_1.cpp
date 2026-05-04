#include <iostream>
using namespace std;

// if you want to use for groups use static methods
// if you want to use for individual objects use non-static methods


class university{
    
    string rollno;
    string name;
    int marks;

    public: // also try keeping static methods in public and check it out
    static string univ_name;
    static string section;
    static int room_no;
    university(){
        rollno="25csu358";
        name="unnamed";
        marks=0;
    }

    university(string rollno, string name, int marks){
        this->rollno = rollno; // rollno=rollno;
        this->name = name; // name=name;
        this->marks = marks; // marks=marks;
    }

    void display_info(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }

    void static display_univ(){
        cout << "University name: " << univ_name << endl;
        cout << "Section: " << section << endl;
        cout << "Room No: " << room_no << endl;
        cout<< "Roll No: " << rollno << endl;
    }
};

string university::univ_name = "NCU";
string university::section = "Section C";
int university::room_no = 33; 


// int a[5];
// string s[4];

int main(){
    university s1[5]={university("25csu001","ABC",80),university("25csu002","DEF",85),university("25csu003","GHI",90),university("25csu004","JKL",95)}; // s("25csu001","ABC",80),s2("25csu002","DEF",85),s3("25csu003","GHI",90),s4("25csu004","JKL",95)
    for(int i=0;i<5;i++){
        s1[i].display_info();
    }
    return 0;
}
