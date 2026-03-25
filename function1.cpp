#include<iostream>
using namespace std;
float Result(int a,int b,int c, int d,int e){
    return (a+b+c+d+e)/5.0;
}
float Result(int a,int b,int c, int d){
    return (a+b+c+d)/4.0;
}
float Result(int a,int b,int c){
    return (a+b+c)/3.0;
}
float Result(int a,int b){
    return (a+b)/2.0;
}
int main()
{
    cout << Result(1,2) << endl;
    cout << Result(1,2,3) << endl;
    cout << Result(1,2,3,4) << endl;
    cout << Result(1,2,3,4,5);
    return 0;
}