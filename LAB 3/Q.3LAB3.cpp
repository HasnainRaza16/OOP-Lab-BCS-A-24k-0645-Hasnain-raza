#include <iostream>
using namespace std;

class Calculator {
	
private:
    int num1, num2;
public:
    void setNumbers(int n, int m) {
    num1 = n;
    num2 = m;
    }
    int add() {
    return num1 + num2;
    }
   };

int main() {
    Calculator c1;
    
    c1.setNumbers(19, 13);
    cout << "Sum is : " << c1.add() << endl;
    return 0;
}
