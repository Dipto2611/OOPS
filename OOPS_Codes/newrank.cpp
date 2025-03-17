#include <iostream>
using namespace std;

class Stud {
public:
    string name;
    int rank;

    // Method to get student data
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter rank: ";
        cin >> rank;
    }
};

int main() {
    Stud s[5], temp;

    // Get input for 5 students
    for (int i = 0; i < 5; i++) {
        s[i].getData();
    }

    // Sorting the students based on rank using Bubble Sort
    for (int i = 0; i < 5 - 1; i++) {  // Outer loop for sorting
        for (int j = i + 1; j < 5; j++) {  // Inner loop for comparing
            if (s[i].rank > s[j].rank) {  // Compare by rank
                // Swap if the rank of s[i] is greater than s[j]
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Displaying sorted names and ranks
    cout << "\nThe sorted list of students based on rank is:\n";
    for (int i = 0; i < 5; i++) {
        cout << s[i].name << ": " << s[i].rank << endl;
    }

    return 0;
}
