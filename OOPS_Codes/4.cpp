#include <iostream>
using namespace std;

class A {
public:
    int n;

    void take() {
        cout << "Enter the number of rows: ";
        cin >> n;
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = i; j < n; j++) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    A a;
    a.take();
    a.display();
    return 0;
}
