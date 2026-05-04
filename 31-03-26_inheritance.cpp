#include <iostream>
using namespace std;

class A {
    
    int a;
    public:
    A(){
        a=20;
        cout<<"a obj is created"<<endl;
    }

    ~A(){
        cout<<"A is destroyed"<<a<<endl;
    }
};

class B: virtual public A{
    int b;
    public:
    B(){
        b=69;
        cout<<"b obj is created"<<endl;
    }

    ~B(){
        cout<<"B is destroyed"<<endl;

    }

    void displayB(){
        cout<<"B is displayed!!"<<b<<endl;
    }
};

class C: virtual public A{
    
    int c;
    public:
    C(){
        c=58;
        cout<<"c obj is created"<<endl;
    }

    ~C(){
        cout<<"C is destroyed"<<endl;
    }

    void displayC(){
        cout<<"C is displayed!!"<<c<<endl;
    }
};

class D: public B, public C{
    
    int d;
    public:
    D(){
        d=80;
        cout<<"d obj is created"<<endl;
    }

    ~D(){
        cout<<"D is destroyed"<<endl;
    }

    void displayD(){
        cout<<"D is displayed!!"<<d<<endl;
    }
};
// Dimond problem
int main(){
    D dobj;
    // D *dptr=new D();
    dobj.displayD();
    return 0;
}