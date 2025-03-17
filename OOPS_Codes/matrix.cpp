#include <iostream>
using namespace std;

class mat1 {
public:
    int arr[3][3], sum;
    int i, j;

    //here were taking input
    mat1() {
        cout << "Enter the 3*3 matrix:" << endl;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                cin >> arr[i][j]; //must remember to use i,j not 3*3 in ar[]
            }
        }
    }

    void RL() {
        int sum = 0;
        for (i = 0; i < 3; i++) {
            sum += arr[i][i];  //by using single var use can add up
        }
        cout << "The R to L diagonal sum is: " << sum << endl;
    }
};

class mat2 : public mat1 {     //here inherit the data mem of class 1 to class 2
public:
    void LR() {
        int sum = 0;
        for (i = 0; i < 3; i++) {
            sum += arr[i][2 - i];
        }
        cout << "The L to R diagonal sum is: " << sum << endl;
    }

    void disp();
};

//used scope res here for good look 
void mat2::disp() {
    cout << "\nThe I/P matrix is:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t"; //first 3 ta op dibe with \t and then after looping out ekta \n lagiye next line theke op dewa shuru korbe
        }
        cout << "\n";
    }
    cout << "\n"; //its for simple spacing
}

int main() {
    mat2 M;
    M.disp();
    M.RL();
    M.LR();
}
