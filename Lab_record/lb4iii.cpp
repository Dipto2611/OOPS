//use parameter const

#include <iostream>

using namespace std;

class Student{
    int roll_no;
    
    public:
   
    Student(int a){
        roll_no=a;
        cout<<"Student roll.no is: "<<roll_no<<endl;
    }

};

int main(){
   
    Student s(73);
    
    return 0;
}