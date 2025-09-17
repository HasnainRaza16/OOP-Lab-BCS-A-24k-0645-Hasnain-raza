#include <iostream>
#include <string>
using namespace std;
class Student {	
public:
    string name;    
private:
    int rollNumber;    
public:
    void setRollNo(int R) {
    this->rollNumber = R;  //I used this here 
    }
    int getRollNo() {
    return rollNumber;
    }
};
int main() {
    Student s;
    s.name = "Hassnain Raza";
    s.setRollNo(645);
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.getRollNo() << endl;
    return 0;
}
