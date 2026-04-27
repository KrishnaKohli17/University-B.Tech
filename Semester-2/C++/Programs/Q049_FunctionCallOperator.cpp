// Q49: Overload () function call operator (functor).
#include <iostream>
using namespace std;
class Multiplier {
    int factor;
public:
    Multiplier(int f) : factor(f) {}
    int operator()(int x) { return x * factor; }
};
int main() {
    Multiplier triple(3);
    cout << triple(5) << endl;
    cout << triple(10) << endl;
    return 0;
}
