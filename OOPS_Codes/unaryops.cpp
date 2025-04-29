#include <iostream>
using namespace std;

class measure {
public:
    int ft, inch;

    measure(int f, int i) { //assingment is used as in general case as like complex no
        ft = f;
        inch = i;
    }

    // Overload unary -- operator
    void operator -() {
        ft--;
        inch--;
    }

    void display() {
        cout << "Feet: " << ft << ", Inches: " << inch << endl;
    }
};

int main() {
    measure m(10,5);

    cout << "Before decrement: ";
    m.display();

    -m;  // Calls operator--()

    cout << "After decrement: ";
    m.display();

    return 0;
}
