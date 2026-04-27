// Q53: Template specialization for a specific type.
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T myMax(T a, T b) { return (a > b) ? a : b; }
template <>
const char* myMax<const char*>(const char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : b;
}
int main() {
    cout << myMax(3, 7) << endl;
    cout << myMax("apple", "mango") << endl;
    return 0;
}
