// Q78: OOP file writing – serialize object data to file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Product {
public:
    string name; double price; int qty;
    Product(string n, double p, int q) : name(n), price(p), qty(q) {}
    void save(ofstream& out) {
        out << name << " " << price << " " << qty << "\n";
    }
};
int main() {
    ofstream out("products.txt");
    Product p1("Apple", 1.5, 100);
    Product p2("Banana", 0.5, 200);
    p1.save(out); p2.save(out);
    out.close();
    cout << "Saved to products.txt\n";
    return 0;
}
