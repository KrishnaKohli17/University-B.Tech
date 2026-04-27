// Q46: Overload unary operators (++, --, -).
#include <iostream>
using namespace std;
class Counter {
    int count;
public:
    Counter(int c=0) : count(c) {}
    Counter operator++() { ++count; return *this; }       // prefix
    Counter operator++(int) { Counter tmp = *this; count++; return tmp; } // postfix
    Counter operator-() { return Counter(-count); }
    void display() { cout << "count = " << count << endl; }
};
int main() {
    Counter c(5);
    (++c).display();
    (c++).display();
    c.display();
    (-c).display();
    return 0;
}
