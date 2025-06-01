/*
Multiplicity describes how many instances of one class relate to instances of another class, commonly expressed in UML and programming by using collections or pointers, e.g., one-to-one, one-to-many, many-to-many relationships.
*/

#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    Book(string t) : title(t) {}
};

class Library {
private:
    vector<Book> books;  // Multiplicity: One Library has many Books

public:
    void addBook(const Book& b) {
        books.push_back(b);
    }

    void showBooks() {
        for (auto &b : books) {
            cout << "Book: " << b.title << endl;
        }
    }
};

int main() {
    Library myLibrary;
    myLibrary.addBook(Book("1984"));
    myLibrary.addBook(Book("To Kill a Mockingbird"));
    myLibrary.showBooks();
    return 0;
}
