// Q9: Demonstrate a local class defined inside a function.
#include <iostream>
using namespace std;

void demo() {
    class Local {
    public:
        void greet() { cout << "Hello from Local class!" << endl; }
    };
    Local l;
    l.greet();
}

int main() {
    demo();
    return 0;
}
