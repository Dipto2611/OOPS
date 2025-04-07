# include <iostream>
using namespace std;

class number{

    int num;
    public:

    number(){
        cin >>num;
        check();
    }

    void check(){
        try
        {    
        if(num>0){
            throw runtime_error ("positive");
        }
        else if (num<0)
        {
            // throw runtime_error ("negetive");
            throw string("negative");
        }
        else{
            // throw runtime_error ("Zero");
            throw runtime_error ("zero");
        }
        }
        catch(const runtime_error &e){
            cout <<"error"<<e.what()<<endl;
        }

        catch (const string e){
            cout << e;
        }
    }

};


int main(){
    number n1;
}