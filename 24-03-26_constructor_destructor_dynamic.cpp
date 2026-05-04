#include <iostream>
using namespace std;
class A{
    int a1;
    int a2;
    int a3;
    public:
    A(){
        cout<<"\n default called";
        a1=0;
        a2=0;
        a3=0;
    }
    A(int a1, int a2,int v3){
        this->a1=a1;
        (*this).a2=a2;
        a3=v3;
    }
    
    void display(){
        cout<<"a1: "<<a1<<endl;
        cout<<"a2: "<<a2<<endl;
    }
    ~A(){
        cout<<"\n destructor called";
    }
};

int main(){
    A obj1, obj2(23,67,90);
    A *obj3 = new A(45,57,78);
    A *obj4 = new A();
    cout<<"\n print ptr obj";
    obj3->display();
    obj4->display();
    cout<<"\n killing one ptr obj";
    delete obj4;
    obj1.display();
    obj2.display();
    obj3->display();
    // obj4->display(); // REMOVED: accessing deleted object causes undefined behavior
    return 0;
}
