// // #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     int accountNumber;
//     double balance;

// public:
//     void getData()
//     {
//         cout << "Enter Account Number: ";
//         cin >> accountNumber;

//         cout << "Enter Initial Balance: ";
//         cin >> balance;
//     }

//     void deposit(double amount)
//     {
//         balance = balance + amount;
//         cout << "Amount Deposited Successfully\n";
//     }

//     void withdraw(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance = balance - amount;
//             cout << "Amount Withdrawn Successfully\n";
//         }
//         else
//         {
//             cout << "Insufficient Balance\n";
//         }
//     }

//     void displayBalance()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main()
// {
//     BankAccount b;

//     b.getData();

//     b.deposit(500);
//     b.withdraw(200);

//     b.displayBalance();

//     return 0;
// }
 //create a class student containing  id class marks  keep marks  private  provide member function to display the detail 
// //provided member function to display the detail    
 #include <bits/stdc++.h>
 using namespace std;
 class Student {
     private:
     int marks;
     public:
     int id; int section;
     void Display(){
        cout<<"Enter student detail:";
        cout<<"Student id:"<<id;
        
        cout<<"enter section"<<section;
        
        cout<<"enter total marks of student"<<marks;
        
     }



 };
 int main(){
    Student s1;
    s1.id=3;
    s1.section=12;
    
    
    
    
 }