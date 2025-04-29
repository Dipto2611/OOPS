#include <iostream>
using namespace std;

class Number{
    int real,i;

    public:
    
    Number(int x=0,int y=0){
        real=x;
        i=y;
    }


    Number operator+ (Number obj){
        Number temp; //temp varible;
        temp.real= real+ obj.real;
        temp.i=i+obj.i;

        return temp;
    }

    void disp(){
        cout<< real<< "+" <<"i"<<i <<endl;
    }
};

int main(){
    Number n1(4,5);
    Number n2(8,6);

    Number n3=n1+n2;
    n3.disp();
}