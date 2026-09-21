#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int id;
    string name;
    int age;
    // default constructor
    student(){
    cout<<"default constructor called:"<<endl;
   }
    student(int age, string name, int id){
        this->id = id;
        this->name = name;
       this->age = age;
    }
    // copy constructor
    student(const student& s){
        this->id = s.id;
        this->name = s.name;
        this->age = s.age;
    }

    
    void sleep(){
        cout<<"student are sleeping:"<<endl;
    }

    void read(){
    cout<<"student are reading the book:"<<endl; 
    }
        void bunk(){
        cout<<"student bunking the class:"<<endl;
        }
        
        
        ///destructor are apply
        //~student(){
            //cout<<"destructed the element:"<<endl;
        //}
    


};
 int main(){
 // student s1;
  //  s1.id=3;
   // s1.name="Aaksh";
   // s1.age=23;
   // s1.read();
//student s2;
   //// s2.id=32;
   // s2.name="Aarksh";
    //s2.age=2;
    //s2.read();
   student s1(3,"Aaksh:",23);
   // student s2(32,"Aarksh",2);
    //cout<<"name of stdent:"<<s1.name<<endl;
    //cout<<"name of stdent:"<<s2.name<<endl;
   // cout<<"age of stdent:"<<s1.age<<endl;
 //   cout<<"age of stdent:"<<s2.age<<s2.name<<endl;
   // s1.sleep();
    //s2.sleep();
   // s1.read();
    //4return 0;
    //copuy constructor
    student C = s1;
    cout<<"name of stdent:"<<C.name<<endl;
    cout<< "age is:"<<C.age<<endl;
    return 0;


}
