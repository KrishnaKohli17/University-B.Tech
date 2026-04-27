// Q63: Create a custom iterator for a simple container class.
#include <iostream>
using namespace std;
class Range {
    int start, end_;
public:
    Range(int s, int e) : start(s), end_(e) {}
    struct Iterator {
        int val;
        Iterator(int v) : val(v) {}
        int operator*() { return val; }
        Iterator& operator++() { ++val; return *this; }
        bool operator!=(const Iterator& o) { return val != o.val; }
    };
    Iterator begin() { return Iterator(start); }
    Iterator end() { return Iterator(end_); }
};
int main() {
    for (int x : Range(1, 6)) cout << x << " ";
    cout << endl;
    return 0;
}
