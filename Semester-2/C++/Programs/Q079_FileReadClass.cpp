// Q79: OOP file reading – deserialize object data from file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Product { string name; double price; int qty; };
int main() {
    ofstream out("prod.txt");
    out << "Apple 1.5 100\nBanana 0.5 200\n";
    out.close();
    ifstream in("prod.txt");
    Product p;
    while (in >> p.name >> p.price >> p.qty)
        cout << p.name << " Rs." << p.price << " Qty:" << p.qty << "\n";
    in.close();
    return 0;
}
