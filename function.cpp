#include <iostream>
using namespace std;

int sum(int, int);
float sum(float, float);
double sum(double, double);

int main() {
    cout<<endl<<sum(10, 20);
    cout<<endl<<sum(10.0f, 20.0f);
    cout<<endl<<sum(45678.0, 20.897894);
    return 0;
}

int sum(int n1, int n2) {
    cout << "\n int method";
    return n1 + n2;
}

float sum(float n1, float n2) {
    cout << "\n float method";
    return n1 + n2;
}

double sum(double n1, double n2) {
    cout << "\n double method";
    return n1 + n2;
}