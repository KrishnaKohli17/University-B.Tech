// Q99: Flyweight pattern – share common state.
#include <iostream>
#include <map>
using namespace std;
class TreeType {
    string name, texture;
public:
    TreeType(string n, string t) : name(n), texture(t) {}
    void draw(int x, int y) { cout << name << "(" << texture << ") at " << x << "," << y << "\n"; }
};
class TreeFactory {
    static map<string, TreeType*> cache;
public:
    static TreeType* get(string name, string texture) {
        if (!cache.count(name)) cache[name] = new TreeType(name, texture);
        return cache[name];
    }
};
map<string, TreeType*> TreeFactory::cache;
int main() {
    auto* oak = TreeFactory::get("Oak","rough");
    auto* oak2 = TreeFactory::get("Oak","rough");
    oak->draw(10,20); oak2->draw(30,40);
    cout << "Same object: " << (oak == oak2) << "\n";
    return 0;
}
