#include <iostream>
using namespace std;

class Arr {
    public:
    int n, *array;
    
    Arr() {
        cout << "Enter size of array: ";
        cin >> n;
        array = new int[n];
        getData();
        add();
    }

    void getData() {
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
    }

    void add() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += array[i];
        }
        cout << "Sum = " << sum << endl;
    }
};

int main() {
    Arr a;
    //a.add();
    return 0;
}
