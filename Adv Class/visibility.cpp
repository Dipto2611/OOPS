/*
Visibility controls access to class members or methods. Common visibility specifiers are:

public (accessible from anywhere),

private (accessible only within the class),

protected (accessible within the class and derived classes).
*/

#include <iostream>
using namespace std;

class Example {
private:
    int privateData;    // Not accessible outside class

public:
    int publicData;     // Accessible anywhere

    Example() {
        privateData = 100;
        publicData = 200;
    }

    void showData() {
        cout << "Private Data: " << privateData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

int main() {
    Example obj;
    // cout << obj.privateData; // Error: privateData not accessible
    cout << obj.publicData << endl;  // Works fine
    obj.showData();                   // Access privateData inside class method
    return 0;
}
