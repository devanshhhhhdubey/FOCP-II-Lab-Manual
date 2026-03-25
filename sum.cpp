#include <iostream>
using namespace std;

void welcome(string fname = "Agent", string lname = "");

int main() {
    welcome();
    welcome("devansh");
    welcome("devansh", "dubey");
    return 0;
}

void welcome(string fname, string lname) {
    cout << "\n Welcome " << fname << " " << lname;
}