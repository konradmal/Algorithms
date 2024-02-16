#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
public:
    string surname;
    double averageGrade;

    Student(string surname, double averageGrade) {
        this->surname = surname;
        this->averageGrade = averageGrade;
    }
    
    void displayInfo() {
        cout << surname << " : " << averageGrade << endl;
    }
};

void sortStudentsLexically(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].surname > students[j + 1].surname || 
               (students[j].surname == students[j + 1].surname && students[j].averageGrade > students[j + 1].averageGrade)) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

int main() {
    Student students[] = {
        {"A", 4.25},
        {"H", 3.37},
        {"B", 6.00},
        {"G", 4.63},
        {"B", 3.33},
        {"C", 5.32},
        {"D", 2.78},
        {"F", 5.21},
        {"G", 3.45},
        {"F", 4.56}
    };

    int numberOfStudents = sizeof(students) / sizeof(students[0]);
    cout << "Before sort:" << endl;
    for (int i = 0; i < numberOfStudents; i++) {
        students[i].displayInfo();
    }
    cout << endl << "After sort:" << endl;
    sortStudentsLexically(students, numberOfStudents);
    for (int i = 0; i < numberOfStudents; i++) {
        students[i].displayInfo();
    }
}