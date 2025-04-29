#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function makes this an abstract class
};

class Dog : public Animal {
public:
    void sound() override { // Override the pure virtual function
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override { // Override the pure virtual function
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Animal animal; // This would cause an error, as Animal is abstract
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound(); // Calls Dog's sound function

    animalPtr = &cat;
    animalPtr->sound(); // Calls Cat's sound function

    return 0;
}
