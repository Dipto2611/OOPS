//Adding Two Numbers Using Function Templates

#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

int main() {
    cout << "Sum of integers: " << add<int>(5, 10) << endl;
    cout << "Sum of doubles: " << add<double>(2.5, 4.5) << endl;

    return 0;
}
