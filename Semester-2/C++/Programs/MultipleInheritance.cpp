// Q28: Multiple inheritance – class inherits from two base classes.
#include <iostream>
using namespace std;
class Father { public: void work() { cout << "Father works\n"; } };
class Mother { public: void cook() { cout << "Mother cooks\n"; } };
class Child : public Father, public Mother {
public: void play() { cout << "Child plays\n"; }
};
int main() { Child c; c.work(); c.cook(); c.play(); return 0; }
