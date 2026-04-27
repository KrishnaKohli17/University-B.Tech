// Q70: Use std::bind to create partial function applications.
#include <iostream>
#include <functional>
using namespace std;
int power(int base, int exp) {
    int result = 1;
    for(int i=0;i<exp;i++) result *= base;
    return result;
}
int main() {
    auto square = bind(power, placeholders::_1, 2);
    auto cube = bind(power, placeholders::_1, 3);
    cout << "5^2 = " << square(5) << endl;
    cout << "3^3 = " << cube(3) << endl;
    return 0;
}
