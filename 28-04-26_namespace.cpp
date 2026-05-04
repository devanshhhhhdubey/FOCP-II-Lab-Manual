#include <iostream>
using namespace std;

namespace MySpace{
    int x = 10;
    void show(){
        cout<<"Hello from MySpace"<<endl;
    }
}

int main(){
    int x = 100;
    cout<<"\n my space: "<<MySpace::x<<endl;
    cout<<"normal variable x = "<<x<<endl;
    MySpace::show();
    return 0;
}