#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file; //read or input 
    string line; // To hold each line from the file

    file.open("mynew.txt");

    if (file.is_open()) {          //check if the file is open or not
        while (getline(file, line)) {  
            cout << line << endl;      
        }
        file.close();          
    } else {
        cout << "Unable to open file.\n";
    }

}