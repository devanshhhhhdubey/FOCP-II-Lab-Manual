#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;

    if(n <= 1){
        cout<<"Not a prime number";
        return 0;
    }

    int flag = 1;
    // every number divisible by 1 so we take i=2
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        cout<<"Prime number";
    }
    else {
        cout<<"Not a prime number";
    }
    return 0;
}
