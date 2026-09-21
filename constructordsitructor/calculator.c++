#include <iostream>
using namespace std;

class Calculator {
    int a, b;

public:
    // Constructor
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    // Addition
    int add() {
        return a + b;
    }

    // Subtraction
    int subtract() {
        return a - b;
    }

    // Multiplication
    int multiply() {
        return a * b;
    }
};

int main() {
    Calculator c(10, 5);

    cout << "Addition = " << c.add() << endl;
    cout << "Subtraction = " << c.subtract() << endl;
    cout << "Multiplication = " << c.multiply() << endl;

    return 0;
}