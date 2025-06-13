#include <iostream>
using namespace std;

class a{
    public:
    
    void show(){
        cout<<"hello guys";
    }
};

class b:virtual public a{};

class c:virtual public a{};


class d:public b,public c{};

int main(){
    d obj;
    obj.show();
}