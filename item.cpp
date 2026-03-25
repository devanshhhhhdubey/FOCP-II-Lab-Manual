#include <iostream>
using namespace std;

class Product
{
    string name;
    float price;
    int quantity;

public:
    // Constructor
    Product(string n, float p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    // Function to calculate total cost
    float totalCost()
    {
        return price * quantity;
    }

    // Display function
    void display()
    {
        cout << "\n Product: " << name;
        cout << "\n Price: " << price;
        cout << "\n Quantity: " << quantity;
        cout << "\n Total Cost: " << totalCost() << endl;
    }

    // Destructor
    ~Product()
    {
        cout << "\n Product removed from memory.";
    }
};

int main()
{
    // Creating objects
    Product p1("Laptop", 50000, 1);
    Product p2("Headphones", 2000, 2);

    // Display details
    cout << "\nProduct 1 Details:";
    p1.display();

    cout << "\nProduct 2 Details:";
    p2.display();

    return 0;
}