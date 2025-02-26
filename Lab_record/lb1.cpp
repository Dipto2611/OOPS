//to find area and perimeter of the circle using class:

#include <iostream>

using namespace std;

class circle{
    public:
    float r; //as it will work as globally so dont use args to the func just pass r to everyone;
    void input(){
        cout<<"Enter radius for the circle:"<<endl;
        cin>>r;
    }
    void area(){
        float a= 3.14*r*r; //area= pi * r**2
        cout<< "Reqd area is:"<<a<<"\n";

    }
    void peri(){
        float p= 2*3.14*r;
        cout<< "Reqd perimeter is:"<<p<<"\n";
    }

};

int main(){
    circle c;
    c.input();
    c.area() ;
    c.peri();

}