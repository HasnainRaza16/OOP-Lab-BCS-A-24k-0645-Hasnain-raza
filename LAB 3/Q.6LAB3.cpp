#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string Make;
    string Model;
    void displayInfo() {
    cout << "Make: " << Make << endl;
    cout << "Model: " << Model << endl;
    }
};

class Car : public Vehicle {
public:
    string engineType;
    
    void displayInfo() {
    Vehicle::displayInfo();
    cout << "Engine Type is : " << engineType << endl;
    }
};

int main() {
    Car c;
    c.Make = "Sonata N-line";
    c.Model = "Sonata";
    c.engineType = "Hybrid";
    c.displayInfo();
    return 0;
}
