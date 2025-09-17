#include <iostream>
#include <string>
using namespace std;

class Concrete {
private:
    string message;
public:
    Concrete(string m) {
    message = m;
}
    void displayMessage() {
    cout << "Message  : " << message << endl;
    }
   };

int main() {
    Concrete obj1(" A Concrete class ");
    obj1.displayMessage();
    return 0;
}
