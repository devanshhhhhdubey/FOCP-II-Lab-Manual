#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;
    static int count;    //its for class not for object used "static"
    public:
    Rectangle(){
        length = 0;
        width = 0;
        count++;
    }
    Rectangle(int l, int w) {
        this->length = l;
        this->width = w;
        count++;
    }
    
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "No of objects created: " << count << endl;
    }

    friend void Area(Rectangle obj);
};

void Area(Rectangle obj) {
    cout << "\n Area: " << obj.length * obj.width << endl;
}

int Rectangle::count; /// static variable definition

int main() {
    Rectangle r1,r2(5, 3);                         //Rectangle r1;          
    r1.display();                                  //r1.display(); // count=1          
    r2.display();                                  //Rectangle r2(5,3);     
    Area(r1);                                      //r2.display(); // count=2                  
    Area(r2);                                      //Rectangle r3(10,20);           
                                                   //r3.display(); // count=3        
    Rectangle r3(10, 20);                                         
    r3.display();                                                            
    Area(r3);                                                      
    
    return 0;
}
