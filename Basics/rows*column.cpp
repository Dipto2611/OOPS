//using nested for loop track the r*c to make a star "*" shape sq


/*/
    note:here for Same no of Rows and column we have to fix n or else use r*c method:
/*/


#include <iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    
    cout<<"Enter the nos of Rows & Columns:";
    cin>>rows>>columns;
    for(int i=1;i<=rows;i++){
        
        for (int j=1;j<=columns;j++){
            cout<<"#";
        }
        cout<< "\n";
    }
    
    cout<<  ' ' ;
}