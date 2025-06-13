#include <iostream>
using namespace std;

class A{
    public:
    
    static int x;

    A(){
        x++;
    }
};

int A::x=10; //using scope res weve done here

int main(){
    A x1;
    cout<<x1.x<<endl;
    A x2;
    cout<<x2.x<<endl;
    A x3;
    cout<<x3.x<<endl;

}