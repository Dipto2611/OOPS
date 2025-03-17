//Hybrid Inheritance (Without virtual)

#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Base class A" << endl;
    }
};

class B : public A {}; // Normal inheritance
class C : public A {}; // Normal inheritance

class D : public B, public C {}; // Multiple inheritance (causes ambiguity)

int main() {
    D obj;
    
    // Resolving ambiguity using scope resolution
    obj.B::showA(); // Access showA() through B
    obj.C::showA(); // Access showA() through C
    
    return 0;
}