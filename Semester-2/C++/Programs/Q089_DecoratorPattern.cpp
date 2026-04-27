// Q89: Decorator design pattern – add behavior dynamically.
#include <iostream>
using namespace std;
class Coffee { public: virtual string getDesc() = 0; virtual double getCost() = 0; virtual ~Coffee(){} };
class SimpleCoffee : public Coffee {
public:
    string getDesc() override { return "Simple Coffee"; }
    double getCost() override { return 20.0; }
};
class MilkDecorator : public Coffee {
    Coffee* base;
public:
    MilkDecorator(Coffee* c) : base(c) {}
    string getDesc() override { return base->getDesc() + " + Milk"; }
    double getCost() override { return base->getCost() + 10.0; }
};
class SugarDecorator : public Coffee {
    Coffee* base;
public:
    SugarDecorator(Coffee* c) : base(c) {}
    string getDesc() override { return base->getDesc() + " + Sugar"; }
    double getCost() override { return base->getCost() + 5.0; }
};
int main() {
    Coffee* c = new SimpleCoffee();
    c = new MilkDecorator(c);
    c = new SugarDecorator(c);
    cout << c->getDesc() << " = Rs." << c->getCost() << "\n";
    return 0;
}
