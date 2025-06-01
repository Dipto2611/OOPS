#include <iostream>
using namespace std;

class Emp{
    private:
    int sal;
    
    public:
    Emp(){
        sal=5000;
    }

    friend void increment(Emp &obj);
};

void increment(Emp &obj){
    obj.sal+=5500;
    cout<<"Incremeted sal is:"<<obj.sal;
}
int main(){
    Emp e;
    increment(e);
}