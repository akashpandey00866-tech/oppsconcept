#include <iostream>
using namespace std;

class Print {
public:
    // Function overloading wh
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    void display(float a) {
        cout << "Float: " << a << endl;
    }

    void display(string a) {
        cout << "String: " << a << endl;
    }

    // Operator overloading (+) {function call karnay pay add karega }
    Print operator+(Print obj) {
        Print temp;
        return temp;
    }
};

int main() {
    Print p1, p2;

    // Function overloading hai
    p1.display(10);
    p1.display(10.5f);
    p1.display("Akash");

    // Operator overloading hai
    p1 + p2;

    cout << "Operator + overloaded successfully." << endl;

    return 0;
}