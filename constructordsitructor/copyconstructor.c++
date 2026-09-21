#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Parameterized Constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Copy Constructor
    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Display function
    void display() {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area = " << area() << endl;
    }
};

int main() {
    // First rectangle
    Rectangle r1(10, 5);

    // Second rectangle created using copy constructor
    Rectangle r2(r1);

    cout << "First Rectangle:" << endl;
    r1.display();

    cout << "\nSecond Rectangle:" << endl;
    r2.display();

    return 0;
}