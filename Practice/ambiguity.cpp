#include <iostream>
using namespace std;

class A{
    public:

    void disp(){
        cout<<"hello";
    }
};
class B{
    public:

    void disp(){
        cout<<"hellow";
    }
};
class C:public B,public A{
    public:

    void disp(){
        cout<<"hi";
    }
};

int main(){
    C obj;

    obj.A::disp();
    cout<<"\n";
    obj.B::disp();
    cout<<"\n";
}   