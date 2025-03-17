/*hybrid cons is a mix of diffnt types of cons*/

# include <iostream>
using namespace std;

class student{
    public:
    int x;
    int y;


    student(){
        cout<<"Enter X input:"<<endl;
        cin>> x;
    };
    student(int a,student &o){
        x = o.x; //here its copying simple {here the thing is o. access operator will access all the members within that class} {as we've to reassign the val in the parameter cons so..}
        y=a;
    }

};

int main(){

    student s1;
    student s2(99,s1); //here the form is of (y,x) [dont confuse]
    cout<<"\n"; 
    cout<<"x="<<s2.x<<endl;
    cout<<"y="<<s2.y<<endl;
}