#include <iostream>
using namespace std;

template <typename T>

void show(T data){
    cout<<"String is: "<<data<<endl;
}

int main(){
    show <string> ("Dipto");
    return 0 ;
}