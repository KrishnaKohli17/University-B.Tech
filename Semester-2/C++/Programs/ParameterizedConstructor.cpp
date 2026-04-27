// Q17: Demonstrate a parameterized constructor.
#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title; double price;
    Book(string t, double p) : title(t), price(p) {}
    void display() { cout << title << " - Rs." << price << endl; }
};
int main() { Book b("C++ Primer", 499.0); b.display(); return 0; }
