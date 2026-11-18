#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    void operator!() {
        if (x == 0)
            cout << "Number is Zero";
        else
            cout << "Number is Not Zero";
    }
};

int main() {
    Number n(0);

    !n;

    return 0;
}