#include <iostream>
using namespace std;

class ElectricityBill
{
    string consumerName;
    int units;
    float billAmount;

public:
    ElectricityBill(); // default constructor
    ElectricityBill(string name, int u); // parameterized constructor

    void calculateBill();
    void displayBill();
};

// Default Constructor
ElectricityBill::ElectricityBill()
{
    consumerName = "Not Assigned";
    units = 0;
    billAmount = 0;
}

// Parameterized Constructor
ElectricityBill::ElectricityBill(string name, int u)
{
    consumerName = name;
    units = u;
    billAmount = 0;
}

// Calculate Bill Function
void ElectricityBill::calculateBill()
{
    if (units <= 100)
    {
        billAmount = units * 5;
    }
    else if (units <= 200)
    {
        billAmount = (100 * 5) + (units - 100) * 7;
    }
    else
    {
        billAmount = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
}

// Display Function
void ElectricityBill::displayBill()
{
    cout << "\n Consumer Name: " << consumerName;
    cout << "\n Units Consumed: " << units;
    cout << "\n Total Bill Amount: ₹" << billAmount << endl;
}

int main()
{
    // Object using default constructor
    ElectricityBill bill1;
    bill1.calculateBill();
    bill1.displayBill();

    // Object using parameterized constructor
    ElectricityBill bill2("Devansh", 250);
    bill2.calculateBill();
    bill2.displayBill();

    return 0;
}