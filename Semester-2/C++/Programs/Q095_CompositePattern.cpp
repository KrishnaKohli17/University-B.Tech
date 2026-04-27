// Q95: Composite design pattern – tree structure.
#include <iostream>
#include <vector>
using namespace std;
class Component {
    string name;
public:
    Component(string n) : name(n) {}
    virtual void display(int indent = 0) {
        cout << string(indent, ' ') << name << "\n";
    }
    virtual ~Component() {}
};
class Composite : public Component {
    vector<Component*> children;
public:
    Composite(string n) : Component(n) {}
    void add(Component* c) { children.push_back(c); }
    void display(int indent = 0) override {
        Component::display(indent);
        for (auto c : children) c->display(indent + 2);
    }
};
int main() {
    Composite root("root");
    Composite branch1("branch1");
    branch1.add(new Component("leaf1"));
    branch1.add(new Component("leaf2"));
    root.add(&branch1);
    root.add(new Component("leaf3"));
    root.display();
    return 0;
}
