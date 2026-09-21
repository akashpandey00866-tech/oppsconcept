#include <iostream>
using namespace std;

class Employee
{
public:
    float salary;
    string name;

 Employee(int salary,string name){
this->salary=salary;
this->name=name;
 }
 
};

int main()
{
    Employee(2000,"Akash pandey");


    return 0;
}