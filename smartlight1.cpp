#include <iostream>
using namespace std;
class SmartLight
{
    char brand;
    int brightness;
    bool isOn;

public:
    SmartLight();                        // default constructor
    SmartLight(char b);                  // parameterized constructor
    SmartLight(char b, int br, bool on); // parameterized constructor
    void setSmartLight(char, int, bool);
    void displaySmartLight();

    void turnOn();
    void turnOff();
    void increaseBrightness(int inc);
    void decreaseBrightness(int dec);
    
    ~SmartLight();
};

SmartLight::~SmartLight()
{
    cout << "\n Destructor called";
}

SmartLight::SmartLight()
{
    brand = ' ';
    brightness = 0;
    isOn = false;
}

SmartLight::SmartLight(char b)
{
    brand = b;
    brightness = 0;
    isOn = false;
}
SmartLight::SmartLight(char b, int br, bool on)
{
    brand = b;
    brightness = br;
    isOn = on;
}
void SmartLight::setSmartLight(char b, int br, bool on)
{
    brand = b;
    brightness = br;
    isOn = on;
}
void SmartLight::displaySmartLight()
{
    cout << "\n Brand: " << brand;
    cout << "\n Brightness: " << brightness;
    cout << "\n Is On: " << (isOn ? "Yes" : "No");
}
void SmartLight::turnOn()
{
    isOn = true;
}
void SmartLight::turnOff()
{
    isOn = false;
}
void SmartLight::increaseBrightness(int inc)
{
    if (brightness + 10 > 0)
    {
        brightness = 100;
    }
    else
    {
        brightness += inc;
    }
}
void SmartLight::decreaseBrightness(int dec)
{
    if (brightness - 10 < 0)
    {
        brightness = 0;
    }
    else
    {
        brightness -= 10;
    }
}
int main()
{
    SmartLight light1;
    light1.setSmartLight('A', 50, false);
    light1.displaySmartLight();

    light1.turnOn();
    light1.increaseBrightness(10);
    light1.displaySmartLight();

    light1.decreaseBrightness(10);
    light1.displaySmartLight();

    return 0;
}