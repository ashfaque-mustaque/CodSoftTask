#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> grades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        studentNames.push_back(name);

        cout << "Enter grade for " << name << ": ";
        cin >> grade;
        grades.push_back(grade);
    }

    // Calculate average, highest, and lowest grades
    double total = 0.0;
    double highest = grades[0];
    double lowest = grades[0];

    for (double grade : grades) {
        total += grade;
        highest = max(highest, grade);
        lowest = min(lowest, grade);
    }

    double average = total / numStudents;

    // Display results
    cout << "\nStudent Grades Summary:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << studentNames[i] << ": " << grades[i] << "\n";
    }

    cout << "\nAverage Grade: " << average << "\n";
    cout << "Highest Grade: " << highest << "\n";
    cout << "Lowest Grade: " << lowest << "\n";

    return 0;
}
