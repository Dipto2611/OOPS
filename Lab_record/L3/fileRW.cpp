# include <iostream>
# include <string>
using namespace std;
# include <fstream>


int main(){
    ofstream ofile("abc.txt");
    
    ofile<<"Hello"<<endl;

    ofile.close();

    ifstream ifile("abc.txt");

    string data;

    while(getline(ifile, data)){
        cout << data << endl;
    }
}