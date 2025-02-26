// copy the values of the box and use the contructor func to do 

#include <iostream>
using namespace std;

class box{
    public:
    int area;

    box(int s){
        area=s*s;
    }
    box(int l, int b){
        area=l*b;
    }
    box(const box &obj){
        area=obj.area;
    }
};

int main(){
    box obj1 (4);
    box obj2 (8,4);
    box obj3 (obj1);
    box obj4 (obj2);
    box obj5 (obj2);
    box obj6 (obj2);
    
    cout<<obj1.area+obj2.area+obj3.area+obj4.area+obj5.area+obj6.area<<endl;
    
}