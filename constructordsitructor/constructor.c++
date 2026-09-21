#include <bits/stdc++.h>
using namespace std ;
class Student{
    int age;
    string name ;

    Student (int age ,string name){
       
       name=name;// this->age = age;
        age=age;//this->name = name;
    }
    void display(){
        cout << "Name: "<<name<<endl ;
        cout << "Age: "<<age<<endl ;
    }
};

int main(){
    Student s1(45,"John");
    Student s2(57,"Akash");
    //s1.display();
    s2.display();
}