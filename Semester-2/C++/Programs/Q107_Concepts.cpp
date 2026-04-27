// Q107: C++20 Concepts for constrained templates.
#include <iostream>
#include <concepts>
using namespace std;
template<typename T>
concept Numeric = integral<T> || floating_point<T>;
template<Numeric T>
T square(T x) { return x * x; }
int main() {
    cout << square(5) << "\n";
    cout << square(3.14) << "\n";
    // square("hello"); // compile error
    return 0;
}
