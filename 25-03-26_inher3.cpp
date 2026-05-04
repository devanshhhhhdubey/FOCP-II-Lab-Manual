// inheritance practice question 3
// Create two classes: Academic with marks, and Sports with score. Derive a class Result
// that displays both academic marks and sports score. Show how the derived class
// accesses members of both base classes. ((Academic,Sports)<-Result)
#include <iostream>
using namespace std;

class Academic {
    protected:
    int marks;
    public:
    Academic() {
        marks = 0;
    }
    Academic(int m) {
        marks = m;
    }
    void display() {
        cout << "Marks: " << marks << endl;
    }
};

class Sports {
    protected:
    int score;
    public:
    Sports() {
        score = 0;
    }
    Sports(int s) {
        score = s;
    }
    void display() {
        cout << "Score: " << score << endl;
    }
};

class Result : public Academic, public Sports {
    public:
    Result() {
        cout<<"Default Constructor of Result"<<endl;
    }
    Result(int m, int s) : Academic(m), Sports(s) {
        cout<<"Parameterized Constructor of Result"<<endl;
    }
    void display() {
        cout << "Marks: " << marks << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {
    Result obj(85, 90);
    obj.display();
    return 0;
}

