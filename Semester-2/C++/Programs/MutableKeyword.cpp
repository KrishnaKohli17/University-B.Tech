// Q14: Use the 'mutable' keyword to modify a member in a const function.
#include <iostream>
using namespace std;

class Logger {
    mutable int callCount = 0;
public:
    void log(const string& msg) const {
        callCount++;
        cout << "[" << callCount << "] " << msg << endl;
    }
};

int main() {
    const Logger l;
    l.log("First");
    l.log("Second");
    return 0;
}
