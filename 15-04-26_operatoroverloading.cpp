#include<iostream>
using namespace std;

class Rectangle
{
  private:
  int length;int width;
  public:
    Rectangle(int l=0,int w=0){length=l;width=w;}
        void display(){
            std::cout<<"Width: "<<width<<", Length: "<< length<< std::endl;}

Rectangle operator+(Rectangle obj){ //Post increment operator
    Rectangle result;
    result.width=width+obj.width;
    result.length=length+obj.length;
    return result;
}
friend Rectangle operator*(Rectangle obj1,Rectangle obj2);
};
    Rectangle operator*(Rectangle obj1,Rectangle obj2){
    Rectangle temp;
    temp.width=obj1.width*obj2.width;
    temp.length=obj1.length*obj2.length;
    return temp;}

int main(){
    Rectangle r1(5,10),r2(67,90);
    r1.display();
    r2.display();
    Rectangle r3=operator*(r1,r2);
    r3.display();
    return 0;
}