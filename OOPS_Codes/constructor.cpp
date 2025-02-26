#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;

    
    Book(string t = "Unknown", string a = "Anonymous") { //here we've default args
        title = t;
        author = a;
    }

    
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    
    Book b1;  
    b1.display();  
   
    //if i want to make a custom
    Book b2("USTM_life","Dipto");  // Custom values
    b2.display();  // Display the custom values

    return 0;
}
