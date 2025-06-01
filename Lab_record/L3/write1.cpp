#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file; // write or output

    file.open("myfile.txt");
    
    if(file.is_open()){
        file<<"Hey Its ME"; 
        file.close();
        cout<<"Data written succesfully"<<endl;
    }

    else{
        cout<<"Unable to open file.";
    }

}