#include <iostream>
using namespace std;

class Print {
public:
    
    void print(int a) {
        cout << "Integer: " << a << endl;
    }

    
    void print(float a) {
        cout << "Float: " << a << endl;
    }

    
    void print(string a) {
        cout << "String: " << a << endl;
    }
    
    
    void print(int a, int b) {
        cout << "Two Integers: " << a << " " << b << endl;
    }
};

int main() {         
    Print obj;

    obj.print(10);
    obj.print(10.5f);
    obj.print("Hello");
    obj.print(10, 20);

    return 0;
}