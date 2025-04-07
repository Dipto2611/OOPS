#include <iostream>
using namespace std;

class S{
    public:
    double x=4.9;

    S(){
        int ans=(int)x + 6;
        cout<<ans;
    }
};
int main(){
    S s1;
}