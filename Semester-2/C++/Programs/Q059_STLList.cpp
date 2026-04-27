// Q59: Use STL list for doubly-linked list operations.
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> l = {1, 2, 3, 4, 5};
    l.push_front(0);
    l.push_back(6);
    l.remove(3);
    for (int x : l) cout << x << " ";
    cout << endl;
    return 0;
}
