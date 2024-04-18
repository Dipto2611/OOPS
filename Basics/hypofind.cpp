//to find the hypo of a triangle

#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int b;
    int c;

    cout<<"Enter Side A:";
    cin>> a;

    cout<<"Enter Side B:";
    cin>> b;
    
    c=sqrt(pow(a,2)+pow(b,2));
    cout<< "The reqd hypo is:" << c;
    
    
}
