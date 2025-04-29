#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Cat barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();  // Virtual function call
    return 0;
}
