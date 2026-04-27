// Q50: User-defined type conversion operator.
#include <iostream>
using namespace std;
class Fraction {
    int num, den;
public:
    Fraction(int n, int d) : num(n), den(d) {}
    operator double() const { return (double)num / den; }
};
int main() {
    Fraction f(3, 4);
    double d = f;
    cout << "Fraction as double: " << d << endl;
    return 0;
}
