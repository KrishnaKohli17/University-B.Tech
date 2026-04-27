// Q16: Demonstrate a default constructor.
#include <iostream>
using namespace std;
class MyClass {
public:
    int x;
    MyClass() { x = 0; cout << "Default constructor called\n"; }
};
int main() { MyClass obj; cout << "x = " << obj.x << endl; return 0; }
