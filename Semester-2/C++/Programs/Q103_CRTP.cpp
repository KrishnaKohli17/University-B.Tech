// Q103: Curiously Recurring Template Pattern (CRTP).
#include <iostream>
using namespace std;
template<typename Derived>
class Base {
public:
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};
class Concrete : public Base<Concrete> {
public:
    void implementation() { cout << "Concrete implementation\n"; }
};
int main() {
    Concrete c;
    c.interface();
    return 0;
}
