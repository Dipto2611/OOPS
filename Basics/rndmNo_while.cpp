#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); //base time is 0;

    int count=1;
    while(count<=5){
        cout<<rand()%6 << ' '; //result till 5 nos (1 to 5)
        count++;
    }
    return 0;
}

/*/ EG:  rand() % 5 → Generates numbers from 0 to 4.
         rand() % 5 + 1 → Shifts the range to 1 to 5
/*/