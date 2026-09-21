#include <iostream>
#include <vector>
using namespace std;

class Numbers {
    vector<int> v;

public:
    void input() {
        int n, x;

        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }
    }

    void display() {
        cout << "Vector elements: ";

        for (auto x : v) {
            cout << x << " ";
        }
    }
};

int main() {
    Numbers obj;

    obj.input();
    obj.display();

    return 0;
}