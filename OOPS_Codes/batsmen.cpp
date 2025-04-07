#include <iostream>
#include <string>
using namespace std;

class person{
    protected:
    int age;
    string name;

};

class batsmen:public person{
    public:
    int runtaken,btavg,ODIplayed,H_cen,F_cen,strike_rate;

    void fetch(){
        cout<<"NAME:"<<endl;
        cin>>name;
        cout<<"AGE:"<<endl;
        cin>>age;
        cout<<"Run Taken"<<endl;
        cin>>runtaken;
        cout<<"Batting avg"<<endl;
        cin>>btavg;
        cout<<"ODI played"<<endl;
        cin>>ODIplayed;
        cout<<"Half cen"<<endl;
        cin>>H_cen;
        cout<<"Full cen"<<endl;
        cin>>F_cen;
        cout<<"Strike Rate"<<endl;
        cin>>strike_rate;
    }

    void display(){

        //display the player
        cout<<"\n"<<name<<" "<<age<<endl;
        cout<<"Run Taken:"<<endl;
        cout<<runtaken<<"\n";
        cout<<"Batting avg:"<<endl;
        cout<<btavg<<"\n";
        cout<<"ODI played:"<<endl;
        cout<<ODIplayed<<"\n";
        cout<<"Half cen:"<<endl;
        cout<<H_cen<<"\n";
        cout<<"Full cen:"<<endl;
        cout<<F_cen<<"\n";
        cout<<"Strike Rate:"<<endl;
        cout<<strike_rate<<"\n";

        

    }
};

int main(){
    batsmen A;
    A.fetch();
    cout<<"Details are given below:";
    A.display();
}