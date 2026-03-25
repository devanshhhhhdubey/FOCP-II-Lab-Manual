#include <iostream>
using namespace std;
class Rectangle{
    float length;
    float width;

    public:
    void inputDimensions(){
        cout<<"Enter dimensions:";
        cin>>length>>width;
    }

    float calculateArea(){
        float area=length*width;
        return area;
    }

    float calculatePerimeter(){
        float perimeter=2*(length+width);
        return perimeter;
    }

    void displayResult(){
        cout<<"length: "<<length<<"\nwidth: "<<width<<"\narea: "<<calculateArea()<<"\nperimeter: "<<calculatePerimeter();
    }
};

int main(){
    Rectangle r;
    r.inputDimensions();
    r.displayResult();
}