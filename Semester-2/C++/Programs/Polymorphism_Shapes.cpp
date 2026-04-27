// Q42: Polymorphism with shape hierarchy (Circle, Rectangle, Triangle).
#include <iostream>
#include <cmath>
using namespace std;
class Shape { public: virtual double area() = 0; virtual void print() = 0; };
class Circle : public Shape {
    double r;
public:
    Circle(double r) : r(r) {}
    double area() override { return 3.14159 * r * r; }
    void print() override { cout << "Circle area: " << area() << endl; }
};
class Rect : public Shape {
    double w, h;
public:
    Rect(double w, double h) : w(w), h(h) {}
    double area() override { return w * h; }
    void print() override { cout << "Rect area: " << area() << endl; }
};
class Triangle : public Shape {
    double b, h;
public:
    Triangle(double b, double h) : b(b), h(h) {}
    double area() override { return 0.5 * b * h; }
    void print() override { cout << "Triangle area: " << area() << endl; }
};
int main() {
    Shape* shapes[] = { new Circle(5), new Rect(4,6), new Triangle(3,8) };
    for (auto s : shapes) { s->print(); delete s; }
    return 0;
}
