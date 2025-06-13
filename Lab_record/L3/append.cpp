#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // Open the file in append mode
    ofstream ofile("abc.txt", ios::app);  // <-- append mode added
    
    ofile << "Hello I'm Dipto" << endl;

    ofile.close();

    ifstream ifile("abc.txt");
    string data;

    while (getline(ifile, data)) {
        cout << data << endl;
    }

    return 0;
}
