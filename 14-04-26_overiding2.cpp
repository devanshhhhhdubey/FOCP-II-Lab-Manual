#include <iostream>
using namespace std;

class shape{
    public:
    shape(){
        cout << "shape default constructor called" << endl;
    }

    void area(){  // removed virtual keyword
        cout << "no dim no area" << endl;
    }

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
    shape *s1, s2;
    Rectangle r2(50,45);

    s1 = &s2;
    s1->area();

    s1 = &r2;
    s2 = r2;

    s1->area();
    s2.area();

    return 0;
}
/*
This code will compile perfectly, but behavior changes:

s1->area() will ALWAYS call shape::area()
Even when s1 points to r2
*/