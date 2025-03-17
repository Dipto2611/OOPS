//use copy const

#include <iostream>
#include <string>

using namespace std;

class Student{
    string section;
    
    public:
   
    Student(string a){
        section=a;  
    }
    
    Student(Student &obj){
        section=obj.section;
        cout<<section<<endl;
    }


};

int main(){
   Student S1("A");
   Student S2(S1);
   
   return 0;
}