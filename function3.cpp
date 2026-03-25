#include<iostream>
using namespace std;
int result(int s1,int s2,int s3=0,int s4=0,int s5=0)

    {
        return (s1+s2+s3+s4+s5);
    }
    int main() {
        cout<<"result of 2 subjects is "<<result(45,58)<<endl;
        cout<<"result of 3 subjects is "<<result(57,68,95)<<endl;
        cout<<"result of 4 subjects is "<<result(78,49,65,77)<<endl;
        cout<<"result of 5 subjects is "<<result(45,69,84,56,75)<<endl;
        return 0;
    }