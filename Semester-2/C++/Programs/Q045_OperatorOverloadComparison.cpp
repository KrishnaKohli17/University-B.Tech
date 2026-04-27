// Q45: Overload ==, !=, <, > operators for a class.
#include <iostream>
using namespace std;
class Distance {
    int meters;
public:
    Distance(int m) : meters(m) {}
    bool operator==(const Distance& o) const { return meters == o.meters; }
    bool operator<(const Distance& o) const { return meters < o.meters; }
    bool operator>(const Distance& o) const { return meters > o.meters; }
    void display() const { cout << meters << " m\n"; }
};
int main() {
    Distance d1(100), d2(200);
    cout << (d1 < d2 ? "d1 < d2" : "d1 >= d2") << endl;
    cout << (d1 == d2 ? "Equal" : "Not Equal") << endl;
    return 0;
}
