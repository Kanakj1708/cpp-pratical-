#include <iostream>
using namespace std;

class Book
{
    int bookID;
    string title;
    float price;

public:
    // Parameterized constructor
    Book(int id, string t, float p)
    {
        bookID = id;
        title = t;
        price = p;

        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Book(const Book &b)
    {
        bookID = b.bookID;
        title = b.title;
        price = b.price;

        cout << "Copy constructor called." << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor called for Book ID: " << bookID << endl;
    }

    void display()
    {
        cout << "\nBook ID: " << bookID;
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price << endl;
    }
};

int main()
{
    Book b1(101, "C++ Programming", 500);

    cout << "\n--- Original Book ---";
    b1.display();

    Book b2 = b1;

    cout << "\n--- Copied Book ---";
    b2.display();

    return 0;
}
Expected Outcome
Parameterized constructor called.

--- Original Book ---
Book ID: 101
Title: C++ Programming
Price: 500

Copy constructor called.

--- Copied Book ---
Book ID: 101
Title: C++ Programming
Price: 500

Destructor called for Book ID: 101
Destructor called for Book ID: 101
