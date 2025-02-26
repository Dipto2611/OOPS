//Find the area of rect by the help of "&" (reference) 
//where 1st show the val before modify and after modify

//BY SIMRAN:

#include<iostream>
using namespace std;

void change(int &l, int &b){
    l=4;b=6;
    int area=l*b;
    cout<<"Area of function ="<<area<<endl;
}

int main(){
    int l=2,b=4;

    //direct show the res for rect
    int res=l*b;
    cout<<"Area before change= "<<res<<endl;
    
    change(l,b);//make the call and where we've to change the internal vals
    
    res=l*b; //after calling the val is changed so we've check whether its changed or not
    cout<<"Area after change= "<<res<<endl;
}


//BY DIPTO:

// #include <iostream>
// using namespace std;

// void rect(int a, int b){
//     int area= a*b;
//     cout<<"with copy"<<area<<endl;
// }

// void change(int &l,int &b){
//     l=10;
//     b=8;
    
// }

// int main(){
//     int l=5;
//     int b=2;

//     rect(l,b);
//     change(l,b);
//     rect(l,b);
// }