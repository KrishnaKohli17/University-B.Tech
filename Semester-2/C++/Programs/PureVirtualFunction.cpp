// Q38: Pure virtual functions and abstract classes.
#include <iostream>
using namespace std;
class AbstractShape {
public:
    virtual double area() = 0;
    virtual void draw() = 0;
};
class Square : public AbstractShape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() override { return side * side; }
    void draw() override { cout << "Drawing Square\n"; }
};
int main() {
    AbstractShape* s = new Square(4);
    s->draw();
    cout << "Area: " << s->area() << endl;
    delete s;
    return 0;
}
