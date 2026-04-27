// Q40: Use dynamic_cast for safe downcasting.
#include <iostream>
using namespace std;
class Animal { public: virtual ~Animal() {} };
class Dog : public Animal { public: void bark() { cout << "Woof!\n"; } };
int main() {
    Animal* a = new Dog();
    Dog* d = dynamic_cast<Dog*>(a);
    if (d) d->bark();
    else cout << "Cast failed\n";
    delete a;
    return 0;
}
