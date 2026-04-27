// Q76: Nested try-catch blocks.
#include <iostream>
using namespace std;
int main() {
    try {
        cout << "Outer try\n";
        try {
            throw runtime_error("Inner error");
        }
        catch (const runtime_error& e) {
            cout << "Inner catch: " << e.what() << "\n";
            throw; // rethrow
        }
    }
    catch (const exception& e) {
        cout << "Outer catch: " << e.what() << "\n";
    }
    return 0;
}
