#include <iostream>
using namespace std;
class Candy
{
    string color;
    int points;

public:
    Candy();                    //default constructor
    Candy(string clr);          //parameterized constructor
    Candy(string clr, int pts); //parameterized constructor
    void setCandy(string, int);
    void displayCandy();

    void lose_points();
    void reducespecifiedPoints(int losePoints);
    void add_points();
    void gained_points(int addPoints);
};

Candy::Candy()
{
    color = "";
    points = 0;
}

Candy::Candy(string clr)
{
    color = clr;
    points = 0;
}

Candy::Candy(string clr, int pts)
{
    color = clr;
    points = pts;
}

void Candy::setCandy(string c, int p)
{
    color = c;
    points = p;
}

void Candy::displayCandy()
{
    cout << "\n Color: " << color;
    cout << "\n Points: " << points;
}

void Candy::lose_points()
{
    points -= 2;
}

void Candy::reducespecifiedPoints(int losePoints)
{
    points -= losePoints;
}

void Candy::add_points(){
    points += 2;
}

void Candy::gained_points(int addPoints)
{
    points += addPoints;
}



int main()
{
    Candy c1, c2("Brown", 32);
    // Candy c1, c2("Blue"); single parameter
    // c1.setCandy("Red", 15);
    // c2.setCandy("Blue", 20);
    c1.displayCandy();
    c2.displayCandy();
    c1.gained_points(50);
    c2.gained_points(42);
    c1.reducespecifiedPoints(5);
    c2.reducespecifiedPoints(3);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}
