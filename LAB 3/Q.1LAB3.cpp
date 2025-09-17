#include <iostream>
#include <string>

using namespace std;

class Student {
	
public:
    string name;
    
    int rollNumber;
};

int main() {
	
    Student s;
    s.name = "Hassnain Raza";
    s.rollNumber = 645;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    return 0;
}
