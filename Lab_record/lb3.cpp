//write a code for friend class:
//simple approach 
#include <iostream>
using namespace std;


class emp{
    private:
    int salary,empcode;

    public:
    emp(){
        salary=50000;
        empcode=96;
    }
    
    friend class Display;
   
};

class Display{
    public:
    void showdata(emp &obj){
        // obj.empcode=40;   //here we've used the refernce things to modify it refer to my ref.cpp
        // obj.salary=6900; //here we've used the refernce things to modify it refer to my ref.cpp
        cout<<"Salary:"<<obj.salary<<endl;
        cout<<"Empcode:"<<obj.empcode<<endl;
    }
};
   

    

int main(){
    emp e1;
    Display d1;
    d1.showdata(e1);

}
