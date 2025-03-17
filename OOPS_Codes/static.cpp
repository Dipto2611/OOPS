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

    /*here below what happening is: if we directly do the assinging  then we will get the exact inc val to it so it wont match our case so then only weve to diffrentiate the whole thing to make them work
    */
    // A x1,x2,x3;
    // cout<<x1.x<<endl;
    // cout<<x2.x<<endl;
    // cout<<x3.x<<endl;
    
    int sum=x1.x+x2.x+x3.x;
    cout<<"the all total sum is:"<<sum<<endl;
}