#include <bits/stdc++.h>
using namespace std;
 class Employee{
    int id;
     void Display(){
        Employee(int id){
            this->id = id;
        }

        cout<<"Employee ID: "<<id<<endl;
     }
    };
    int main(){
        Employee *emp =new Employee();

        emp->id =101;
        emp->Display();
         delete emp ;
         return 0;
    }