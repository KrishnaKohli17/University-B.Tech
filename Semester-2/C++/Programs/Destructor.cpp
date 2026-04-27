// Q20: Demonstrate destructor with resource cleanup.
#include <iostream>
using namespace std;
class Resource {
public:
    int* data;
    Resource(int val) { data = new int(val); cout << "Acquired resource\n"; }
    ~Resource() { delete data; cout << "Released resource\n"; }
};
int main() {
    { Resource r(42); cout << "Using resource: " << *r.data << endl; }
    cout << "After scope\n";
    return 0;
}
