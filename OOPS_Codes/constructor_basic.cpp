#include <iostream>
#include <string>
using namespace std;


class stud{
    public:
    int roll;
    string name;
    
    stud(){  //here ive created a constructor
        cout<< "Enter the roll-no:";
        cin>> roll;
        cout<<"Enter name:";
        cin>> name;

    }
    void display(){
        cout<<roll<<endl;
        cout<<name<<endl;
        
    }
   

};

int main(){
    stud S1;
    S1.display();
    return 0;
}