#include <bits/stdc++.h>
using namespace std;
class Number{
    int n1, n2;
    int total;

public:
    int num;
    void enterNumber(){
        cout << "Enter a number : ";
        cin >> num;
    }

    Number add(Number a, Number b){
        Number result;
        result.num = a.num + b.num;
        return result;
    }
};
int main(){
    Number n1, n2, result;
    n1.enterNumber();
    n2.enterNumber();
    result = n1.add(n1, n2);
    cout << "Sum: " << result.num << endl;
    return 0;
}