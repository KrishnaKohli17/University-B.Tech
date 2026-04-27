// Q100: Iterator design pattern for a custom collection.
#include <iostream>
#include <vector>
using namespace std;
class NumberCollection {
    vector<int> numbers;
public:
    void add(int n) { numbers.push_back(n); }
    class Iterator {
        const vector<int>& data; size_t index;
    public:
        Iterator(const vector<int>& d, size_t i) : data(d), index(i) {}
        int operator*() { return data[index]; }
        Iterator& operator++() { ++index; return *this; }
        bool operator!=(const Iterator& o) { return index != o.index; }
    };
    Iterator begin() const { return Iterator(numbers, 0); }
    Iterator end() const { return Iterator(numbers, numbers.size()); }
};
int main() {
    NumberCollection nc;
    for (int i : {10,20,30,40,50}) nc.add(i);
    for (int n : nc) cout << n << " ";
    cout << "\n";
    return 0;
}
