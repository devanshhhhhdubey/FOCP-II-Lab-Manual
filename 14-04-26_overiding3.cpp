#include <iostream>
using namespace std;

class shape{
    public:
    shape(){
        cout << "shape default constructor called" << endl;
    }

    virtual void area()=0; // abstract class virtual void area()= 0 makes it pure virtual

    void display(){
        cout << "we are 2d shapes" << endl;
    }
};

class Rectangle : public shape{
    public:
    int length;
    int width;
   
    Rectangle(int l=5, int w=3) : length(l), width(w) {
        cout << "Rectangle object created" << endl;
    }

   void area(){
        cout << "area=" << length * width << endl;
    }
};

int main(){
    //shape *s1,s2;
    Rectangle r2(50,45);
    return 0;
}
