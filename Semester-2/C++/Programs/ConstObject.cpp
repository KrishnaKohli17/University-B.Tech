// Q11: Use const objects and const member functions.
#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const { return 3.14159 * radius * radius; }
};

int main() {
    const Circle c(5.0);
    cout << "Area: " << c.area() << endl;
    return 0;
}
