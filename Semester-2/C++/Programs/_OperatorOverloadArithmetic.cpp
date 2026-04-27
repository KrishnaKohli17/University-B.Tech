// Q43: Overload +, -, * operators for a Complex number class.
#include <iostream>
using namespace std;
class Complex {
public:
    double real, imag;
    Complex(double r=0, double i=0) : real(r), imag(i) {}
    Complex operator+(const Complex& o) const { return {real+o.real, imag+o.imag}; }
    Complex operator-(const Complex& o) const { return {real-o.real, imag-o.imag}; }
    Complex operator*(const Complex& o) const {
        return {real*o.real - imag*o.imag, real*o.imag + imag*o.real};
    }
    void display() const { cout << real << " + " << imag << "i\n"; }
};
int main() {
    Complex c1(3,4), c2(1,2);
    (c1+c2).display();
    (c1-c2).display();
    (c1*c2).display();
    return 0;
}
