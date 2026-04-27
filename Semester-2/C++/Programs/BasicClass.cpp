// Q1: Define a class 'Car' with attributes brand, speed and a method display().
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int speed;
    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c;
    c.brand = "Toyota";
    c.speed = 120;
    c.display();
    return 0;
}
