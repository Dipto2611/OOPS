//multiple inheri 

#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Base class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Base class B" << endl;
    }
};

class C : public A, public B { // Inheriting from A and B
public:
    void showC() {
        cout << "Derived class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}
