// Q7: Demonstrate friend class concept.
#include <iostream>
using namespace std;

class B;
class A {
private:
    int data = 100;
    friend class B;
};

class B {
public:
    void show(A& a) { cout << "A's private data: " << a.data << endl; }
};

int main() {
    A a; B b;
    b.show(a);
    return 0;
}
