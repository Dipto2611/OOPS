/*
Function template overloading is the process of defining multiple functions with the same name, where some are generic (using templates) and others are specific (non-template), allowing the compiler to choose the best match based on arguments.
*/

#include <iostream>
using namespace std;

// Template function
template <typename T>
T add(T a, T b) {
    cout << "Template function called\n";
    return a + b;
}

// Non-template overloaded function
int add(int a, int b) {
    cout << "Normal function called\n";
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;     // as it will take it as specific int 
    cout << add(2.5, 3.5) << endl;   //and this double will go for temp
    return 0;
}
