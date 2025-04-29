#include <iostream>
using namespace std;

class a{
    public:
    int n1;
    a(){
        n1=26;
    }
    void disp(){
        cout<<n1<<endl;
    }
};

class b:virtual public a{
    public:
    int n2;
};

class c:virtual public a{
    public:
    int n3;
};

class d:public b,public c{};

int main(){
    d obj;
    obj.disp();
}