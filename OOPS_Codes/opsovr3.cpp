// minus operator
#include <iostream>
using namespace std;

class number{
    int n;

    public:

    number(int x=0){
        n=x;
    }

    number operator - (number obj){
        number temp;
        temp.n= n - obj.n;
        return temp;
    }

    void disp(){
        cout<<n;
    }

};

int main(){
    number n1(8);
    number n2(2);
    number n3;
    n3=n1-n2;
    n3.disp();
    cout<<endl;
}