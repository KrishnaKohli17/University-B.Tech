// Q22: Use member initializer list in constructors.
#include <iostream>
using namespace std;
class Point {
    const int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}
    void display() const { cout << "(" << x << ", " << y << ")" << endl; }
};
int main() { Point p(3, 7); p.display(); return 0; }
