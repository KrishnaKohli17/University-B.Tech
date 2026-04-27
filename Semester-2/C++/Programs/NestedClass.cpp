// Q8: Implement a nested class (class inside a class).
#include <iostream>
using namespace std;

class Outer {
public:
    int x = 10;
    class Inner {
    public:
        int y = 20;
        void display() { cout << "Inner y = " << y << endl; }
    };
    void display() { cout << "Outer x = " << x << endl; }
};

int main() {
    Outer o;
    Outer::Inner i;
    o.display();
    i.display();
    return 0;
}
