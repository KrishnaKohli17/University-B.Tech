// Q65: Use shared_ptr for shared ownership.
#include <iostream>
#include <memory>
using namespace std;
class Node {
public:
    int val;
    Node(int v) : val(v) { cout << "Node(" << v << ") created\n"; }
    ~Node() { cout << "Node(" << val << ") destroyed\n"; }
};
int main() {
    shared_ptr<Node> p1 = make_shared<Node>(42);
    { shared_ptr<Node> p2 = p1; cout << "Use count: " << p1.use_count() << "\n"; }
    cout << "Use count after p2 gone: " << p1.use_count() << "\n";
    return 0;
}
