#include <iostream>
using namespace std;

int main() {
    int n=100000;
    int *A = new int[n];
// try and make it with A only
    int B[50];
    cin>>n;
    int B[n]; // wrong - variable length array
    int *B = new int[n]; // correct
    delete []B;
    return 0;
}
