#include <iostream>
using namespace std;

class Table
{
    string material;
    float price;
    int legs;

public:
    Table(); // default constructor
    Table(string m, float p); // 2-parameter constructor
    Table(string m, float p, int l); // 3-parameter constructor

    void display();
};

// Default constructor
Table::Table()
{
    material = "Wood";
    price = 5000;
    legs = 4;
}

// Constructor with material and price
Table::Table(string m, float p)
{
    material = m;
    price = p;
    legs = 4; // default legs
}

// Constructor with all values
Table::Table(string m, float p, int l)
{
    material = m;
    price = p;
    legs = l;
}

// Display function
void Table::display()
{
    cout << "\n Material: " << material;
    cout << "\n Price: " << price;
    cout << "\n Legs: " << legs << endl;
}

int main()
{
    // Creating objects using different constructors
    Table t1;                     // default
    Table t2("Glass", 8000);     // material + price
    Table t3("Steel", 12000, 6); // all values

    // Display details
    cout << "\nTable 1 Details:";
    t1.display();

    cout << "\nTable 2 Details:";
    t2.display();

    cout << "\nTable 3 Details:";
    t3.display();

    return 0;
}