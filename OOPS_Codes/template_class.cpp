#include <iostream>
using namespace std;

template <typename T>

class Number{
    private:
    T n;

    public:
    void getdata(T num){ //here we didn't add T bcoz we're not returning something so simple no use
       n = num;
    }
    T showdata(){ //here im returing so data type is reqdd
        return n;
    }

};

int main(){
    Number <int> obj;
    obj.getdata(8);
    cout<<"Val is:"<<obj.showdata()<<endl;
    return 0;
     
}


/*
#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
    
public:
    Box(T v) {
        value = v;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> b1(10);
    Box<double> b2(3.14);

    b1.display();
    b2.display();

    return 0;
}

*/