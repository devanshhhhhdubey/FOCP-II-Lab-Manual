#include <iostream>
using namespace std;

class shape{  //shape becomes abstrac class because it has one pure virtual method
    public:
    shape(){
        cout << "shape default constructor called" << endl;
    }
 
    virtual void area()=0; // shape became abstract class, pure virtual function should be defined in derived class

    virtual void display() final{ // final methods cannot be overridden in derived classes
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
    
    void display_dim() const{
        // length++; // This would cause a compile error since display_dim is const
        cout << "\n length & width "<<length<<" "<<width << endl;
    }

    void display(){
        cout << "i am rectangle display" << endl;
    }
};

int main(){
    //shape *s1,s2;
    Rectangle r2(50,45);
    r2.display();
    r2.display_dim();
    return 0;
}
