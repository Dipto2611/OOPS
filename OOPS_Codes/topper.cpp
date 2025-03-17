/* Write a program to find the topper of the class of 3 students based on marks in 3 subjects.
Display the Student details. */

#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    int m1,m2,m3;
    int total;
    string name;


    Student(){
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter marks:"<<endl;
        cin>>m1>>m2>>m3;
        
        CalcMarks();
    }
    void CalcMarks(){
        total=m1+m2+m3;
    }

};

int main(){
    Student s[3];

    int highestm=0,index;
    
    for(int i=0;i<3;i++){
        if(s[i].total > highestm ){
            highestm=s[i].total;
            index=i;
        }
    }
    
    cout<<"Topper is:"<<s[index].name<<endl;
    cout<<"Total marks:"<<s[index].total<<endl;

}