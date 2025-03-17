// Multilevel Inheritance

#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Base class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Derived class B" << endl;
    }
};

class C : public B { // C inherits B, B inherits A
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