// Q51: Function template for finding maximum of two values.
#include <iostream>
using namespace std;
template <typename T>
T maxVal(T a, T b) { return (a > b) ? a : b; }
int main() {
    cout << maxVal(3, 7) << endl;
    cout << maxVal(3.14, 2.71) << endl;
    cout << maxVal('z', 'a') << endl;
    return 0;
}
