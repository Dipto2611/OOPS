#include <iostream>
using namespace std;

class arr{
    public:
    int a[5]={0};

    void insert(){
        int n;
        cout<<"Enter add:";
        cin>>n;

        try
        {
            if(n>5){
                throw runtime_error ("Index out of bound\n");
                
            }
            else{
                cout<<"Enter value to array:";
                cin>>a[n];
            }
        }
        catch(const exception& e)
        {
            cout<<e.what();
        }
        

    }


};

int main(){
    arr a;
    a.insert();
}