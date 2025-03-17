#include <iostream>
using namespace std;
class Stud{
    public:
    string name;
    int rank;

    void getData(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter rank:";
    cin>>rank;
}

};

int main(){
    Stud s[5],temp;
    for(int i=0;i<5;i++){
        s[i].getData();
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }

    cout<<"The names are:";
    for(int i=0;i<5;i++){
        cout<<s[i].name;
        cout<<s[i].rank;
    }
    return 0;

}