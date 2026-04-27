// Q58: Use STL set for unique elements.
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s = {5, 3, 8, 1, 3, 5};
    for (int x : s) cout << x << " ";
    cout << endl;
    s.insert(10); s.erase(3);
    for (int x : s) cout << x << " ";
    cout << endl;
    return 0;
}
