// Q33: Method overriding in derived class.
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() { cout << "Drawing Shape\n"; }
};
class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle\n"; }
};
int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}
