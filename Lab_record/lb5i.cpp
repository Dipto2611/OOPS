//single inheri

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class A" << endl;
    }
};

class B : public A { // B inherits A
public:
    void display() {
        cout << "Derived class B" << endl;
    }
};

int main() {
    B obj;
    obj.show();    // Accessing base class function
    obj.display(); // Accessing derived class function
    return 0;
}
