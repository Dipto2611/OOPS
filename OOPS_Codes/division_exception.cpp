#include <iostream>
using namespace std;

int main(){
    int num,den;
    int res;

    try{
        cout<<"Enter nos for numerator and denominator:"<<endl;
        cin>>num;
        // cout<<"\n";
        cin>>den;

        if(den==0){
            throw runtime_error ("Not Possible");
        }
        else{
            res=num/den;
            cout<<"Result is:"<<res<<endl;
        }
       
    }
    catch(const exception &m){
        cout<<m.what()<<endl;

            
    }

}