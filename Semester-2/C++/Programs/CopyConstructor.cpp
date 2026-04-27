// Q18: Implement and demonstrate a copy constructor.
#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    string name; int id;
    Employee(string n, int i) : name(n), id(i) {}
    Employee(const Employee& e) : name(e.name), id(e.id) {
        cout << "Copy constructor called\n";
    }
    void display() { cout << id << ": " << name << endl; }
};
int main() {
    Employee e1("Alice", 101);
    Employee e2 = e1;
    e2.display();
    return 0;
}
