#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int regNo;
    double mark1, mark2, mark3;
    double average;
    char grade;

public:
    void input() {
        cout << "Enter the student's name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter the registration number: ";
        cin >> regNo;

        cout << "Enter marks for three subjects (mark1 mark2 mark3): ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }

    void calculateGrade() {
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

    void display() {
        cout << "Average marks: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student;

    cout << "Enter student details:" << endl;
    student.input();

    student.calculateAverage();
    student.calculateGrade();

    cout << "Student record:" << endl;
    student.display();

    return 0;
}
