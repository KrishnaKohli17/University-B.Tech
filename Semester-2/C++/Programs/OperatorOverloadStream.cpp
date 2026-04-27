// Q44: Overload << and >> operators for a class.
#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
    Point(int x=0, int y=0) : x(x), y(y) {}
    friend ostream& operator<<(ostream& os, const Point& p) {
        return os << "(" << p.x << ", " << p.y << ")";
    }
    friend istream& operator>>(istream& is, Point& p) {
        return is >> p.x >> p.y;
    }
};
int main() {
    Point p(3, 7);
    cout << "Point: " << p << endl;
    return 0;
}
