// Q54: Variadic template – sum of any number of arguments.
#include <iostream>
using namespace std;
template <typename T>
T sum(T t) { return t; }
template <typename T, typename... Args>
T sum(T first, Args... rest) { return first + sum(rest...); }
int main() {
    cout << sum(1, 2, 3, 4, 5) << endl;
    cout << sum(1.1, 2.2, 3.3) << endl;
    return 0;
}
