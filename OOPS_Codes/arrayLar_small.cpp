//find the lar and small no . then find the sum of large and small
#include <iostream>
using namespace std;

class Array{
    public:
    int arr[5],sum;


    void input(){
        cout<<"Enter arr elements:"<<endl;
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }

    void compare(){
        int large=arr[0],small=arr[0]; //the tips is we've to declare here bcoz if we do it in 1st part then it will store the garbage val for this variable, so make it declare here only
        
        for (int i = 1 ; i < 5; i++){
            if(arr[i]>large){ //to check if the input is larger than my a[0]
                large=arr[i];  
            }
            if(arr[i]<small){
                small=arr[i];
            }

        }
        cout<<"Largest:"<<large<<endl<<"Smallest:"<<small<<endl;
        sum=large+small;
        cout<<"SUM:"<<sum<<endl;
        
    }
    
};

int main(){
    Array a;
    a.input();
    a.compare();
}    