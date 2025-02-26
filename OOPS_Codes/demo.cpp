//Its the basic approach for oops implementation:

#include <iostream>
using namespace std;

// Defining a Student class
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Dipto";
    s1.age = 20;
    s1.display();
    return 0;
}
