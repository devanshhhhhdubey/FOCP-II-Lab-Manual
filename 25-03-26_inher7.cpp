// // inheritance practice question 7
// Create a class Shape with a function draw(). Derive two classes Circle and Rectangle,
// each having a function area(). Show how both derived classes use the base class
// function. (Shape<-Circle , Shape<-Rectangle)

#include <iostream>
using namespace std;

class Shape{
    public:
    void draw(){
        cout<<"Shape is being drawn"<<endl;
    }
};

class Circle : public Shape{
    public:
    void area(){
        cout<<"Circle area"<<endl;
    }
};

class Rectangle : public Shape{
    public:
    void area(){
        cout<<"Rectangle area"<<endl;
    }
};

int main(){
    Circle circle;
    circle.draw();
    circle.area();
    
    Rectangle rectangle;
    rectangle.draw();
    rectangle.area();
    return 0;
}
