#include <iostream>
#include <string>
using namespace std;

class Student {
	
private:
    string name;
    
    int rollNo;
    
    double marks;
    
    char grade;
    

public:
    Student(string nm, int rn, double mr) {
        name = nm;
        rollNo = rn;
        marks = mr;
    }

    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else
            grade = 'F';
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        cout <<"___________________________"<< endl;
        
    }
};

int main() {
    Student s1("Hassnain Raza", 645, 88);
    Student s2("Ali hyder", 768, 83);

    s1.calculateGrade();
    s2.calculateGrade();

    s1.displayStudentInfo();
    s2.displayStudentInfo();

    return 0;
}
