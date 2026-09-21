#include <iostream>
#include <vector>
using namespace std;

class Array {
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

    void sum() {
        int total = 0;

        for (auto x : v) {
            total = total + x;
        }

        cout << "Sum = " << total << endl;
    }
};

int main() {
    Array obj;

    obj.input();
    obj.sum();

    return 0;
}