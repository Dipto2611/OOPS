#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    public:
    int area_cicle;
    int h_cyl;
    int r;
    float t;

    Shape(){
        cout<<"Enter the area of the circle:";
        cin>>area_cicle;
        cout<<"Enter the height of cyl:";
        cin>>h_cyl;
    }

    void getradius(){
        r=sqrt(area_cicle/3.14);
        cout<<r<<"cm"<<endl;
    }
    void totalarea(){
        t=2*area_cicle + 2*3.14*r*h_cyl;
        cout<<"The total area is:"<<t<<"cm2"<<endl;
    }

};

int main(){
    Shape S;
    S.getradius();
    S.totalarea();
}
//bhery easyyy
