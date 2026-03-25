#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
    
}
float sum(float x, float y) {
    return x + y;
}
double sum(double p, double q) {
    return p + q;
}
int main() {
    cout << sum(5, 10) << endl;
    cout << sum(5.28,10.28) << endl;
    cout << sum(5.289,10.289) << endl;
    return 0;
}