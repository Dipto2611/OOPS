/*
ENUM-

Its a user defined datatype that consists of paired named-int const.
It improves code readability and type safety by grouping related constants under a single type.

*/

#include <iostream>
using namespace std;

enum Color { Red, Green, Blue };

int main() {
    Color favoriteColor = Green;  // Using enum type (its fixed only)
    if (favoriteColor == Green) {
        cout << "Favorite color is Green." << endl;
    }
    return 0;
}
