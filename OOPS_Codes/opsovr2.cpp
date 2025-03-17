//write a code to add complex nos

#include <iostream>
using namespace std;

class Complex{
    int real,img;
    public:

    Complex(int r=0,int i=0){
        real=r;
        img=i;

    }

    Complex operator+ (Complex const & obj){
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }

    void print(){
        cout<<real<<"+"<<img;
    }

};

int main(){

    Complex c1(10,5);
    Complex c2(2,5);    
    Complex c3(3,4);
    Complex c4(1,2);
    
    Complex c5=c1+c2;
    Complex c6=c3+c4;

    c5=c5+c6;

    c5.print();
    return 0;

}