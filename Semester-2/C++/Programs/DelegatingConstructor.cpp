// Q23: Delegating constructors (C++11).
#include <iostream>
using namespace std;
class Circle {
    double r, pi;
public:
    Circle() : Circle(1.0) {}
    Circle(double radius) : r(radius), pi(3.14159) { cout << "Circle r=" << r << endl; }
    double area() { return pi * r * r; }
};
int main() {
    Circle c1, c2(5.0);
    cout << c1.area() << "\n" << c2.area() << endl;
    return 0;
}
