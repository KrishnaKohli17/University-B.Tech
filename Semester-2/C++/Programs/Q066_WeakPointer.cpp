// Q66: Use weak_ptr to avoid circular reference.
#include <iostream>
#include <memory>
using namespace std;
class B;
class A {
public:
    shared_ptr<B> bPtr;
    ~A() { cout << "A destroyed\n"; }
};
class B {
public:
    weak_ptr<A> aPtr;  // weak to break cycle
    ~B() { cout << "B destroyed\n"; }
};
int main() {
    auto a = make_shared<A>();
    auto b = make_shared<B>();
    a->bPtr = b;
    b->aPtr = a;
    return 0;  // both A and B properly destroyed
}
