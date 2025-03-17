//use op overloading to find the area of 2 circle then subtract their area;

#include <iostream>
using namespace std;

class Circle{
    public:
    int area,r;

    //Circle(){};
    Circle(int rad=0){
        r=rad;
        area=3.14*r*r;
    }

    Circle operator- (Circle const &obj){
        Circle res;

        res.area=area-obj.area;
        return res; 
    }


};

int main(){
    Circle c1(5);
    Circle c2(7);
    Circle c3=c2-c1;
    cout<<c3.area<<endl;
}