//USE FRIEND FUNC TO COMPLETE A CODE:
//to print stud details

#include <iostream>
#include <string>
using namespace std;

class Stud{
    private:
    int roll_no;
    string name;

    public:

    Stud(string a, int b){
        roll_no=b;
        name=a;
    }
    friend void display(Stud s);

};

void display(Stud s){
    cout<<"Name:"<< s.name <<endl;
    cout<<"Roll No:"<< s.roll_no <<endl;
}

int main(){
    Stud s1("Dipto",73);
    display(s1);
    return 0;
}