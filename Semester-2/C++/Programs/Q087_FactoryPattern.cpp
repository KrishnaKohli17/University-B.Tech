// Q87: Factory Method design pattern.
#include <iostream>
using namespace std;
class Animal { public: virtual void speak() = 0; virtual ~Animal() {} };
class Dog : public Animal { public: void speak() override { cout << "Woof!\n"; } };
class Cat : public Animal { public: void speak() override { cout << "Meow!\n"; } };
class Bird : public Animal { public: void speak() override { cout << "Tweet!\n"; } };
class AnimalFactory {
public:
    static Animal* create(const string& type) {
        if (type == "dog") return new Dog();
        if (type == "cat") return new Cat();
        if (type == "bird") return new Bird();
        return nullptr;
    }
};
int main() {
    for (auto& t : {"dog","cat","bird"}) {
        Animal* a = AnimalFactory::create(t);
        if (a) { a->speak(); delete a; }
    }
    return 0;
}
