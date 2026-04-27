// Q106: Use type_traits for compile-time type checks.
#include <iostream>
#include <type_traits>
using namespace std;
template<typename T>
void describe() {
    cout << "Is integral: " << is_integral<T>::value
         << ", Is floating point: " << is_floating_point<T>::value
         << ", Is pointer: " << is_pointer<T>::value << "\n";
}
int main() {
    cout << "int: "; describe<int>();
    cout << "double: "; describe<double>();
    cout << "int*: "; describe<int*>();
    return 0;
}
