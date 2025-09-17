#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;
public:
    void setNumbers(int n, int m);
    int add();
  };

void Calculator::setNumbers(int x, int y) {
    num1 = x;
    num2 = y;
}

int Calculator::add() {
    return num1 + num2;
}

int main() {
    Calculator c1;
    c1.setNumbers(35, 25);
    cout << "Sum is : " << c1.add() << endl;
    return 0;
}
