#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    string author;
    int price;

public:

    // Constructor
    Book(string t, string a, int p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Copy Constructor
    Book(const Book &b)
    {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Display details
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Object Destroyed" << endl;
    }
};

int main()
{
    Book b1("C++ Programming", "Bjarne Stroustrup", 500);

    cout << "First Book:" << endl;
    b1.display();

    Book b2(b1);

    cout << "\nSecond Book:" << endl;
    b2.display();

    return 0;
}