// Q85: Throwing exceptions from constructors.
#include <iostream>
#include <stdexcept>
using namespace std;
class Age {
    int value;
public:
    Age(int v) {
        if (v < 0 || v > 150) throw invalid_argument("Invalid age: " + to_string(v));
        value = v;
        cout << "Age set to " << value << "\n";
    }
};
int main() {
    try { Age a1(25); Age a2(-5); }
    catch (const invalid_argument& e) { cout << "Error: " << e.what() << "\n"; }
    return 0;
}
