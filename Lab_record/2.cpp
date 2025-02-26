#include <iostream>
using namespace std;

class Change {
public:
    int l, b;  // Member variables

    void rect(int x, int y) {
        l = x;  // Assign values to member variables
        b = y;
        int area = l * b;
        cout << "Before: " << area << endl;
    }

    void change(int &l, int &b) {
        l = 7;  // Update values using reference
        b = 8;
        cout << "After: " << l * b << endl;
    }
};

int main() {
    Change c1;

    c1.rect(2, 5);  // Initializes l and b
    c1.change(c1.l, c1.b);  // Modifies l and b using reference

    return 0;
}
