// Q102: Rvalue references and perfect forwarding.
#include <iostream>
using namespace std;
void process(int& x) { cout << "Lvalue: " << x << "\n"; }
void process(int&& x) { cout << "Rvalue: " << x << "\n"; }
template<typename T>
void forward_it(T&& val) { process(forward<T>(val)); }
int main() {
    int x = 42;
    forward_it(x);        // lvalue
    forward_it(100);      // rvalue
    return 0;
}
