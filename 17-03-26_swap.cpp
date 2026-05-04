// swap using reference variable
#include <iostream>
using namespace std;
void swap(int &r1, int &r2){
    int temp = r1;
    r1 = r2;
    r2 = temp;
    cout<<r1<<endl<<r2;
}

int main(){
    int a=30,b=55;
    swap(a,b);

    return 0;
}

