#include <iostream>
using namespace std;

int main()
{
    int inventory[2][2], rewards[2][2], updated[2][2];

    // Input current inventory
    cout << "Enter Current Inventory (2x2):\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> inventory[i][j];
        }
    }

    // Input rewards
    cout << "\nEnter Mission Rewards (2x2):\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> rewards[i][j];
        }
    }

    // Add matrices
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            updated[i][j] = inventory[i][j] + rewards[i][j];
        }
    }

    // Display current inventory
    cout << "\nCurrent Inventory:\n";
    for(int i = 0; i < 2; i++)
    {
        cout << "[ ";
        for(int j = 0; j < 2; j++)
        {
            cout << inventory[i][j] << " ";
        }
        cout << "]\n";
    }

    // Display rewards
    cout << "\nMission Rewards:\n";
    for(int i = 0; i < 2; i++)
    {
        cout << "[ ";
        for(int j = 0; j < 2; j++)
        {
            cout << rewards[i][j] << " ";
        }
        cout << "]\n";
    }

    // Display updated inventory
    cout << "\nUpdated Inventory:\n";
    for(int i = 0; i < 2; i++)
    {
        cout << "[ ";
        for(int j = 0; j < 2; j++)
        {
            cout << updated[i][j] << " ";
        }
        cout << "]\n";
    }

    return 0;
}