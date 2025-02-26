//in this code ive checked for reference topic 
#include <iostream>
using namespace std;

void modify(int &x) { // the val(a) is now being replaced by the val stored in loc of x i.e x=20
    x = 20;  // Modifies the original 'a'
}

int main() {
    int a = 10;
    cout << "Before modify: " << a << endl;  // Output: 10
    modify(a); // a ke andr 10 jayega
    cout << "After modify: " << a << endl;  // Output: 20
    return 0;
}

/*/NOTE:
    here (&x-> a) now directly pointing to a only; 
/*/
