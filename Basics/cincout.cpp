#include <iostream>
using namespace std;

int main(){
    int age;
    string Namex;

    cout << "Enter name:" ;
    getline(cin,Namex);             /// we use this to print the whole text

    cout<<"Enter age:" ;
    cin>> age;

    cout << "Your name is " << Namex << " and you're " << age << " years old"<< endl;


}