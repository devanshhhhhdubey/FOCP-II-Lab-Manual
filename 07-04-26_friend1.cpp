#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;
    
    public:
    Rectangle(){
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w) {
        this->length = l;
        this->width = w;
    }
    
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    friend void Area(Rectangle obj);
};

void Area(Rectangle obj) {
    cout << "\n Area: " << obj.length * obj.width << endl;
}

int main() {
    Rectangle r1,r2(5, 3);
    r1.display();
    r2.display();
    Area(r1);
    Area(r2);
    return 0;
}
