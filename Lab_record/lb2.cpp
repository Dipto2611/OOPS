//write a code for friend func:
//simple approach 
#include <iostream>
using namespace std;


class emp{
    private:
    int salary,empcode;

    public:
    emp(){
        salary=95000;
        empcode=169;
    }
    
    friend void showdata(emp &obj);

   
};
void showdata(emp &obj){
    cout<<"Salary:"<<obj.salary<<endl;
    cout<<"Empcode:"<<obj.empcode<<endl;
       
}

int main(){
    emp e;
    showdata(e);
}

