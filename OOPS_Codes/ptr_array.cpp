#include <iostream>
using namespace std;

class Arr{
    public:
    int sum,n,*array; //as arr here indicates to garbage loc;

    Arr(){
        cout<<"Enter size of array:";
        cin>>n;
        array= new int [n]; //but here we've assigned a new mem loc for it and we know that arr do have fix mem loc

        fetchdata();
    }

    void fetchdata(){
        int i;
        cout<<"Enter elements:"<<endl;
        for(i=0;i<n;i++){
            cin>>array[i];
        }
    }

    void do_Sum();
};

//here i've used the inline func
inline void Arr::do_Sum(){
    sum=0; //make it 0 coz otherwise it will hold the garbage val
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }
    cout<<sum;

}

int main(){
    Arr a;
    a.do_Sum();   
}