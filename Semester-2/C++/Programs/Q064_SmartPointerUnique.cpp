// Q64: Use unique_ptr for automatic memory management.
#include <iostream>
#include <memory>
using namespace std;
class Animal {
    string name;
public:
    Animal(string n) : name(n) { cout << name << " created\n"; }
    ~Animal() { cout << name << " destroyed\n"; }
    void speak() { cout << name << " speaks\n"; }
};
int main() {
    auto a = make_unique<Animal>("Lion");
    a->speak();
    // automatically destroyed when out of scope
    return 0;
}
