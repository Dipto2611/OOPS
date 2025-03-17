/*Write a program to solve ambiguity in multiple inheritance in OOPS.*/
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Function of class A" << endl;
    }
};

class B {
public:
    void show() {
        cout << "Function of class B" << endl;
    }
};

class C : public A, public B { // Multiple Inheritance
public:
    void display() {
        cout << "Function of class C" << endl;
    }
};

int main() {
    C obj;

    // Resolving ambiguity using scope resolution
    obj.A::show(); // Calls show() of class A
    obj.B::show(); // Calls show() of class B
    obj.display(); // Calls display() of class C {here simply under C its calling the disp}

    return 0;
}

