// as outer loop determines the rows & inner refers column:
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter row size:";
    cin>>n;
    for(int i=1;i<=n;i++){   /* as here the nos or rows == no of inc # here */
        for (int j=1;j<=i;j++){ //for to make them in inc order (tips:nos of j must be <=i)
            cout<<"#" << ' ';
        }
       cout<<"\n";
        
    }

}