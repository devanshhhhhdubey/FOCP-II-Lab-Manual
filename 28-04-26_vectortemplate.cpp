#include <iostream>
#include <vector>
using namespace std;

template <typename T1>
T1 add(T1 v1, T1 v2){
    return v1 + v2;
}

int main(){
    cout<<add<int>(10,20)<<endl;
    cout<<add<double>(10.5,20.5)<<endl;
    cout<<add<string>("Hello ","World")<<endl;
    return 0;
}
