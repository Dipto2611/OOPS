//basic write type for file 
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("mynew.txt");
    file<<"Hello there, Dipto here...";

    file.close();
}