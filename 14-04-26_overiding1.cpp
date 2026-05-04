#include <iostream>
using namespace std;

class shape{
    public:
    shape(){
        cout << "shape default constructor called" << endl;
    }

    virtual void area(){ // using virtual keyword to enable dynamic binding
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
    shape *s1,s2;
    Rectangle r2(50,45);
    s1 = &s2;
    s1->area();
    //r2.area();
    s1=&r2;
    s2=r2;
    //cout<<s1->length;
    s1->area();
    s2.area();
    return 0;
}
