// Q30: Hybrid inheritance using virtual base class.
#include <iostream>
using namespace std;
class A { public: void show() { cout << "A\n"; } };
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};
int main() { D d; d.show(); return 0; }
