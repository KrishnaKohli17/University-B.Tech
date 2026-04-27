// Q92: Builder design pattern for constructing complex objects.
#include <iostream>
#include <string>
using namespace std;
class Pizza {
public:
    string size, crust, topping;
    void display() { cout << size << " pizza, " << crust << " crust, " << topping << " topping\n"; }
};
class PizzaBuilder {
    Pizza pizza;
public:
    PizzaBuilder& setSize(string s) { pizza.size = s; return *this; }
    PizzaBuilder& setCrust(string c) { pizza.crust = c; return *this; }
    PizzaBuilder& setTopping(string t) { pizza.topping = t; return *this; }
    Pizza build() { return pizza; }
};
int main() {
    Pizza p = PizzaBuilder().setSize("Large").setCrust("Thin").setTopping("Mushroom").build();
    p.display();
    return 0;
}
