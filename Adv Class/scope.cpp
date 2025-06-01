/*
SCOPE

Scope is the region of code where an identifier (like variable & function) is defined and accessible. Common scopes include global,local and class scope.

*/

#include <iostream>
using namespace std;

int globalVar = 10; // Global scope

void show() {
    int localVar = 20;  // Local scope, accessible only inside this function
    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    show();
    cout << "Global variable in main: " << globalVar << endl;
    return 0;
}
