#include <bits/stdc++.h>
using namespace std;
class student{
    int pasward;
    public:
    string name;
    int rollno;
    int age;
    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"age:"<<age<<endl;
    }

};
int main(){
    student s1;
   s1.name="Akash pandey";
   s1.rollno=23;
   s1.age=16;
   student s2;
   s2.name=" pandey";
   s2.rollno=2;
   s2.age=6;
    s1.display();
    s2.display();
   

    


    
}