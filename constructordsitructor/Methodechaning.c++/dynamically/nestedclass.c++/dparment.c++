#include <iostream>
using namespace std;

class University {
private:
    string universityName;

    class Department {
    private:
        string departmentName;

    public:
        Department(string d) {
            departmentName = d;
        }

        void displayDepartment() {
            cout << "Department Name: " << departmentName << endl;
        }
    };

public:
    University(string u) {
        universityName = u;
    }

    void display() {
        cout << "University Name: " << universityName << endl;

        Department d("Computer Science  and engeenirng ");
        d.displayDepartment();
    }
};

int main() {
    University u("ABES Engineering College");
    u.display();

    return 0;
} 