// inheritance practice question 6
// Create a class Device with a function powerOn(). Derive a class Computer with a
// function process(). Further derive a class Laptop with a function carry(). Demonstrate
// all functions using a Laptop object.(Device<-Computer<-Laptop)
#include <iostream>
using namespace std;

class Device {
public:
    void powerOn() {
        cout << "Device power on!!" << endl;
    }
};

class Computer : public Device {
public:
    void process() {
        cout << "Computer processing!!" << endl;
    }
};

class Laptop : public Computer {
public:
    void carry() {
        cout << "Laptop is being carried!!" << endl;
    }
};

int main() {
    Laptop laptop;
    laptop.powerOn();
    laptop.process();
    laptop.carry();
    return 0;
}