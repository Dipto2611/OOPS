#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL)); // Seed the random number generator

    int num = rand() % 6; // Generates a number between 0 and 5
    cout << num << "\n";

    return 0;
}

// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() {
//     srand(time(NULL)); // Seed random number generator

//     for (int i = 0; i < 5; i++) {
//         int num = rand() % 10 + ; // Generates numbers from 1 to 10
//         cout << num << " ";
//     }

//     return 0;
// }
