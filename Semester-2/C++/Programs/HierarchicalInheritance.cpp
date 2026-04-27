// Q29: Hierarchical inheritance – one base, multiple derived.
#include <iostream>
using namespace std;
class Vehicle { public: void move() { cout << "Vehicle moves\n"; } };
class Car : public Vehicle { public: void drive() { cout << "Car drives\n"; } };
class Bike : public Vehicle { public: void ride() { cout << "Bike rides\n"; } };
int main() {
    Car c; c.move(); c.drive();
    Bike b; b.move(); b.ride();
    return 0;
}
