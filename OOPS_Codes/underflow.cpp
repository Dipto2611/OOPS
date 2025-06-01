#include <iostream>
using namespace std;

class arr{
    public:
   

    void input(){
        int n;
        cout<<"Enter no:";
        cin>>n;

        try
        {
            if(n<=0){
                throw runtime_error ("Error, Underflow condition is met\n");
                
            }
            n--;
            cout << "Number after decrement: " << n << endl;  
        }
        catch(const exception& e)
        {
            cout<<e.what();
        }
        

    }


};

int main(){
    arr a;
    a.input();
}