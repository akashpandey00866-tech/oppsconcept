// create classes student and sports . store acadmic marks in student and sports marks in sport. use friend function to calaculate total score 



#include <iostream>
using namespace std;

class Sports;

class Student {
private:
    int academicMarks;

public:
    void getAcademicMarks() {
        cout << "Enter academic marks: ";
        cin >> academicMarks;
    }

    friend void totalScore(Student, Sports);
};

class Sports {
private:
    int sportsMarks;

public:
    void getSportsMarks() {
        cout << "Enter sports marks: ";
        cin >> sportsMarks;
    }
    

    friend void totalScore(Student, Sports);
};

void totalScore(Student s, Sports sp) {
    int total = s.academicMarks + sp.sportsMarks;
    cout << "Total Score = " << total;
}

int main() {
    Student s;
    Sports sp;

    s.getAcademicMarks();
    sp.getSportsMarks();

    totalScore(s, sp);

    return 0;
}