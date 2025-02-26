// using class find the area of the rect:

#include <iostream>
using namespace std;

class Rect{
    public:
    int area(int a,int b){
        return a*b;
    }

};

int main(){
    int a,b;
    Rect r1;
    cout<<"Enter dimensions L & B:"<<' ';
    cin>>a>>b;

    cout<<r1.area(a,b)<<endl;
    
}