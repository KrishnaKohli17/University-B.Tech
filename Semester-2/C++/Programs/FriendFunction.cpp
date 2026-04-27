// Q6: Use a friend function to access private members of a class.
#include <iostream>
using namespace std;

class Box {
private:
    double length;
public:
    Box(double l) : length(l) {}
    friend double getVolume(Box b);
};

double getVolume(Box b) { return b.length * b.length * b.length; }

int main() {
    Box b(4.0);
    cout << "Volume: " << getVolume(b) << endl;
    return 0;
}
