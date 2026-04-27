// Q104: Mixin classes using templates.
#include <iostream>
using namespace std;
class Printable { public: void print() { cout << "Printable\n"; } };
class Serializable { public: void serialize() { cout << "Serializable\n"; } };
template<typename... Mixins>
class Widget : public Mixins... {};
int main() {
    Widget<Printable, Serializable> w;
    w.print();
    w.serialize();
    return 0;
}
