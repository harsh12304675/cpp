//to create a entire  c++ program to find the average of marks between two subjects using classes and also creating funtions in public 
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[5];

public:
    void setData(string n, int m[]) {
        name = n;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    float calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return static_cast<float>(sum) / 5;
    }
};

int main() {
    string name1, name2;
    int marks1[5], marks2[5];

    cout << "Enter name of student 1: ";
    cin >> name1;
    cout << "Enter marks of student 1 (5 subjects): ";
    for (int i = 0; i < 5; i++) {
        cin >> marks1[i];
    }

    cout << "Enter name of student 2: ";
    cin >> name2;
    cout << "Enter marks of student 2 (5 subjects): ";
    for (int i = 0; i < 5; i++) {
        cin >> marks2[i];
    }

    Student student1, student2;
    student1.setData(name1, marks1);
    student2.setData(name2, marks2);

    float avg1 = student1.calculateAverage();
    float avg2 = student2.calculateAverage();

    cout << "Average marks of " << name1 << ": " << avg1 << endl;
    cout << "Average marks of " << name2 << ": " << avg2 << endl;

    return 0;
}
