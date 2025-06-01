#include <iostream>
using namespace std;

class num {
public:
    int real, img;

    num(int a = 0, int b = 0) {
        real = a;
        img = b;
    }

    num operator- (num &obj) {
        num temp;
        temp.real = real - obj.real;
        temp.img = img - obj.img;
        return temp;
    }

    bool operator== (num &obj) {
        return (real == obj.real) && (img == obj.img);
    }

    void disp() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    num c1(4, 5);
    num c2(6, 3);
    num c3;

    // Comparison
    if (c1 == c2)
        cout << "Both complex numbers are equal" << endl;
    else
        cout << "Complex numbers are not equal" << endl;

    // Subtraction
    c3 = c1 - c2;
    cout << "Subtraction result: ";
    c3.disp();

    return 0;
}
