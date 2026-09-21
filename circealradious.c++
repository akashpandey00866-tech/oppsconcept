#include <bits/stdc++.h>
using namespace std;

class Circle
privte:
void getdata();
{
    float radius;

public:
    void getdata()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c;

    c.getdata();

    cout << "Area of Circle = " << c.area();

    return 0;
}