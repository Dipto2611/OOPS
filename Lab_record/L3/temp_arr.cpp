#include <iostream>
using namespace std;

template <typename T>

T search( T arr[],T n,T key){
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            cout<<"Found it!"<<endl;
            return i;
        }
    }
    return -1; //if not found
}


int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter the element to search: ";
    cin >> key;  // 🡺 user inputs the key value

    int index = search(arr, 5, key); //here search's val is assinged to index to crosscheck

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}