#include <iostream>
using namespace std;

class Employee
{
private:
    float basic;

public:
    void getdata()
    {
        cout << "Enter basic salary: ";
        cin >> basic;
    }

    friend void gross(Employee);
};

void gross(Employee e)
{
    float hra = e.basic * 0.20;
    float da = e.basic * 0.10;

    cout << "Gross salary = " << e.basic + hra + da;
}

int main()
{
    Employee e;

    e.getdata();
    gross(e);

    return 0;
}