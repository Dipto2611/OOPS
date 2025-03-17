#include <iostream>
using namespace std;

// A here is the base class:
class A {
public:
    A() {
        cout << "Constructor of Class A" << endl;
    }
};


class B : public A {
public:
    B() {
        cout << "Constructor of Class B" << endl;
    }
};


class C : public A {
public:
    C() {
        cout << "Constructor of Class C" << endl;
    }
};


class D : public B, public C {
public:
    D() {
        cout << "Constructor of Class D" << endl;
    }
};

int main() {
    D obj;  

    return 0;
}
