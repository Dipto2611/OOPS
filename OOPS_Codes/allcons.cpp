//use all cons
#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
   
    
    Student(){ //def
        cout<<"My name is Dipti"<<endl;
    }

    Student(int a){  //para
        roll=a;
        cout<<"My roll is :"<<roll<<endl;
    }

    Student(Student &obj){ //copy
        cout<<"Roll no is copied now!!\n";
        roll=obj.roll;
        cout<<"Copied roll no is:"<<roll<<endl;
    }

};

int main(){
    Student A;
    Student D(73);
    Student C(D);
}