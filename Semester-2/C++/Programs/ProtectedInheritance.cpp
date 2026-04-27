// Q31: Protected inheritance – access specifier demo.
#include <iostream>
using namespace std;
class Base {
public: int pub = 1;
protected: int prot = 2;
private: int priv = 3;
};
class Derived : protected Base {
public: void show() { cout << pub << " " << prot << endl; }
};
int main() { Derived d; d.show(); return 0; }
