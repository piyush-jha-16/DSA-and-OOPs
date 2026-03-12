#include<bits/stdc++.h>
using namespace std;
class Box{
    private:
    double length;
    double breadth;
    double side;
    public:
    Box(){
        length = 0;
        breadth = 0;
        side = 0;
    }
    Box(double l, double b){
        this->length = l;
        this->breadth = b;
    }
    Box(double s){
        this->side = s;
    }
    double area(){
        if(this->side!=0) return this->side*this->side;
        return this->length*this->breadth;
    }
};
int main(){
    Box b1(5, 3);
    Box b2(4);
    cout<<"Area of Box 1: "<<b1.area()<<endl;
    cout<<"Area of Box 2: "<<b2.area()<<endl;
    return 0;
}