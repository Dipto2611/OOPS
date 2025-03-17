//write a c++ prog to use default constructor

#include <iostream>

using namespace std;

class A{
    public:
    
    A(){
        cout<<"This is default constructor"<<endl;
    }
};

int main(){
    A def;
    return 0;
}