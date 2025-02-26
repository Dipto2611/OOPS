//use copy constructor

//Write a C++ program to define a class Student with attributes like name, age and section.
//Implement a copy constructor that copies the values from one object to another and display both objects'
//data.

#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    int age;
    string name,section;

    Student(){} //for default

    
    void info(int a,string b,string c){
        age=a;
        name=b;
        section=c;
    }
    void initials(int a,string b){
        age=a;
        name=b;

    }

    void disp(){
        cout<<"Student info:"<<age <<name <<section <<endl;
    }
    
    Student(Student &obj){ //copying
        section=obj.section;
    }
};

int main(){
    Student s1;
    s1.info(17," Deep ","A");
    Student s2(s1);
    s2.initials(21," Dipto ");
    s1.disp();
    s2.disp();
}