// Q24: Use 'explicit' keyword to prevent implicit conversions.
#include <iostream>
using namespace std;
class Meter {
    double value;
public:
    explicit Meter(double v) : value(v) {}
    void display() { cout << value << " m" << endl; }
};
void print(Meter m) { m.display(); }
int main() {
    Meter m(5.5);
    print(m);
    // print(3.0); // Error: implicit conversion blocked
    return 0;
}
