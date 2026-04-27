// Q21: Constructor overloading – multiple constructors in same class.
#include <iostream>
using namespace std;
class Shape {
public:
    double val1, val2;
    Shape() : val1(0), val2(0) { cout << "Default\n"; }
    Shape(double a) : val1(a), val2(a) { cout << "Square\n"; }
    Shape(double a, double b) : val1(a), val2(b) { cout << "Rectangle\n"; }
    double area() { return val1 * val2; }
};
int main() {
    Shape s1, s2(5), s3(4, 6);
    cout << s1.area() << " " << s2.area() << " " << s3.area() << endl;
    return 0;
}
