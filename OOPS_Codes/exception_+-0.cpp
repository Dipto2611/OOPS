//check a no is +ve -ve or 0

#include <iostream>
using namespace std;

int main(){
    int no;

    try
    {
        cout<<"Enter no:";
        cin>>no;

        if(no>0){
            throw runtime_error ("+ve");
        }
        if(no<0){
            throw runtime_error ("-ve");
        }
        else{
            throw runtime_error ("zero");
        }
    }
    catch(const exception & e)
    {
        cout<<e.what()<<endl;
    }
    
}