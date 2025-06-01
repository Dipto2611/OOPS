#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // declared in class
public:
    Counter() { 
        ++count; 
    }

    static int getCount() {
        return count; 
    }
};

// Definition of static member outside the class
int Counter::count = 0;

int main() {
    // Create some objects
    Counter c1, c2, c3;

    // Access static data member using static member function
    cout << "Accessing static data member: " << Counter::getCount() << endl;

    return 0;
}
