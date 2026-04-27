// Q10: Access class members using object pointers and arrow operator.
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    void display() { cout << name << ", Age: " << age << endl; }
};

int main() {
    Person p = {"Alice", 25};
    Person* ptr = &p;
    ptr->display();
    cout << "Name: " << ptr->name << endl;
    return 0;
}
