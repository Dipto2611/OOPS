#include <iostream>
using namespace std;

class Arr{
    public:
    int *a;
    int x;

    Arr(){
        cout<<"Enter size:";
        cin>> x;

        a= new int[x];

       
    }
    void get(){
        cout<<"Enter elements:"<<endl;
        for (int i=0;i<x;i++){
                
            cin>>a[i];
        }
    }
    void show(){
        for (int i=0;i<x;i++){
            cout<<" "<<a[i];
        }
    }
};

int main(){
    Arr a1;
    a1.get();
    a1.show();
    
}