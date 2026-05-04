#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l = 0, int w = 0) {
        length = l;
        width = w;
    }

    // Display function
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    // Pre-increment (++obj)
    Rectangle operator++() {
        ++length;
        ++width;
        return *this;
    }

    // Post-increment (obj++)
    Rectangle operator++(int) {
        Rectangle temp = *this; // save old value
        length++;
        width++;
        return temp;
    }
};

int main() {
    Rectangle r1(5, 10);

    cout << "Original:\n";
    r1.display();

    // Pre-increment
    ++r1;
    cout << "\nAfter Pre-Increment:\n";
    r1.display();

    // Post-increment
    r1++;
    cout << "\nAfter Post-Increment:\n";
    r1.display();

    return 0;
}