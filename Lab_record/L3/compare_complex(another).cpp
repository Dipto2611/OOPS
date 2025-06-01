#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void get() {
        cout << "Enter real part :";
        cin >> real;
        cout<< "Enter imaginary part:";
        cin>> imag;
    }

    
    Complex operator-(Complex obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;  
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.get();

    cout << "Enter second complex number:" << endl;
    c2.get();

    result = c1 - c2; 
    cout << "Subtraction Result: ";
    result.display();

    return 0;
}