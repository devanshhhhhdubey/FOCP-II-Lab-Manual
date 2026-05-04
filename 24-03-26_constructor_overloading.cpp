#include <iostream>
using namespace std;
class A{
    int a1;
    int a2;
    public:
    A(){
        a1=0;
        a2=0;
    }
    A(int a1, int a2){
        a1=a1;
        a2=a2;
    }
    
    void display(){
        cout<<"a1: "<<a1<<endl;
        cout<<"a2: "<<a2<<endl;
    }
};

int main(){
    A obj1, obj2(23,67);
    obj1.display();
    obj2.display();
    return 0;
}
