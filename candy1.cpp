#include <iostream>
using namespace std;

class Candy
{
    string color;
    int points;

public:
    void setCandy(string c, int p);
    void displayCandy();
};

// Set values
void Candy::setCandy(string c, int p)
{
    color = c;
    points = p;
}

// Display values
void Candy::displayCandy()
{
    cout << "\n Candy Color: " << color;
    cout << "\n Points: " << points << endl;
}

int main()
{
    Candy c1, c2;

    // Setting values
    c1.setCandy("Red", 10);
    c2.setCandy("Blue", 20);

    // Displaying values
    cout << "\nCandy 1 Details:";
    c1.displayCandy();

    cout << "\nCandy 2 Details:";
    c2.displayCandy();

    return 0;
}