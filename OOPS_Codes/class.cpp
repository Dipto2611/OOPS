#include <iostream>
#include <string>
using namespace std;

class Atten
{
public:
    int a1, a2, a3;
    float totalA;

    int wholeAtten(int s1, int s2, int s3)
    {
        a1 = s1;
        a2 = s2;
        a3 = s3;

        totalA = a1 + a2 + a3;
        cout << totalA << endl;
        return 0;
    }
};

class stud : public Atten
{
private:
    int m1, m2, m3;

public:
    string name;
    int roll_no;
    int tmarks;

    int calcTMarks(int M1, int M2, int M3)
    {
        m1 = M1;
        m2 = M2;
        m3 = M3;
        tmarks = M1 + M2 + M3;
        cout << tmarks << endl;
        return 0;
    }

    int updatedM(int FullTA)
    {
        if (totalA > FullTA)
        {
            tmarks+=(.1*tmarks );
            
        }
        else{
            tmarks-=(.2*tmarks );
            
        }
        cout<<tmarks<<endl;
        return 0;
    }
};
int main(){
    stud X1, X2, X3;

    X1.calcTMarks(50, 56, 89);
    X2.calcTMarks(58, 66, 69);
    X3.calcTMarks(90, 76, 49);

    X1.wholeAtten(5, 4, 3);
    X2.wholeAtten(7, 1, 5);
    X3.wholeAtten(4, 4, 6);

    int ClassTotalA = (X1.totalA + X2.totalA + X3.totalA) / 3;

    X1.updatedM(ClassTotalA);
    X2.updatedM(ClassTotalA);
    X3.updatedM(ClassTotalA);
}


       