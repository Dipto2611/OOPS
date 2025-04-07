//left rhs triangle

#include <iostream>
using namespace std;

class tri{
    public:
    int rows;

    void disp(){
        cout<<"Enter the no of rows";
        cin>>rows;
        for (int i=rows;i>0;i--){
            for (int j=0;j<=rows;j++){
                if(j>=i){
                    cout<<"*";
                }
                
                else{
                    cout<<" ";
                }
                
            }
            cout<<endl;
        }
        
    }

};

int main(){
    tri t;
    t.disp();
}



