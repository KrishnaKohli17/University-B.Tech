// Q34: Base class pointer pointing to derived class object.
#include <iostream>
using namespace std;
class Animal { public: virtual void sound() { cout << "Some sound\n"; } };
class Cat : public Animal { public: void sound() override { cout << "Meow\n"; } };
class Dog : public Animal { public: void sound() override { cout << "Woof\n"; } };
int main() {
    Animal* a[] = { new Cat(), new Dog() };
    for (auto p : a) { p->sound(); delete p; }
    return 0;
}
