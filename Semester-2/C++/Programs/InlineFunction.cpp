// Q12: Use inline member functions for efficiency.
#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b) { return a + b; }
    inline int mul(int a, int b) { return a * b; }
};

int main() {
    Calculator c;
    cout << "Add: " << c.add(3, 4) << endl;
    cout << "Mul: " << c.mul(3, 4) << endl;
    return 0;
}
