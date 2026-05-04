#include <iostream>
using namespace std;

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

int main(){
    university s1,s2("25csu000", "ABC", 80);
    cout<<"\n University name: "<<university::univ_name; //s1.univ_name won't work
    
    s1.display_info();
    s2.display_info();
    university::display_univ;
    //s2.display_univ();    
    return 0;
}
