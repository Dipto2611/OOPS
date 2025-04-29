//class and student use friend class

#include <iostream>
using namespace std;

class stud{
    int roll;
    int id;

    friend class school;
};

class school{
    public:
    school(stud &obj){
        cout<<"Enter id and roll resp:"<<endl;;
        cin>>obj.id;
        cin>>obj.roll;
    }

    void disp(stud &obj){
        cout<<"Entered id & roll is:"<<endl;;
        cout<<obj.id<<endl;
        cout<<obj.roll<<endl;
    }
};

int main(){
    stud s1;
    school sc(s1);
    sc.disp(s1);
}
