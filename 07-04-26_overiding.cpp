#include <iostream>
using namespace std;


//childname.parent(class) 
// objectname.parentclassname::

class shape{
    public:
    void area(){
        cout << "no dimensions, no area" << endl;
    }

    void perimeter(){
        cout << "no dimensions, no perimeter" << endl;
    }

    void dimensions(){
        cout << "nothing to display" << endl;
    }

    void display(){
        cout<<"******************************We are 2-D shapes******************************"<<endl;
    }
};

class square : public shape{
    int side;
    public:
    square(){
        side = 0;
    }

    square(int s){
        side = s;
    }
    void area() // overriding
    {
        cout << "Area of square: " << side * side << endl;
    }
    void perimeter() // overriding
    {
        cout << "Perimeter of square: " << 4 * side << endl;
    }
    void dimensions(){ // overriding
        cout << "Side of square: " << side << endl;
    }
};

class rectangle : public shape{
    int length;
    int width;
    public:
    rectangle(){
        length = 0;
        width = 0;
    }
    rectangle(int l, int w){
        length = l;
        width = w;
    }
    void area() // overriding
    {
        cout << "Area of rectangle: " << length * width << endl;
    }
    void perimeter() // overriding
    {
        cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
    }
    void dimensions(){ // overriding
        cout << "sides are: " << length << " " << width << endl;      
    }
};

int main(){
    shape s1;
    square s,ss(12);
    rectangle r,rr(34,45);
    s1.area(); s1.perimeter(); s1.dimensions(); s1.display();
    ss.area(); ss.perimeter(); ss.dimensions(); ss.display();
    ss.area();

    return 0;
}