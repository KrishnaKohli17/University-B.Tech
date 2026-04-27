// Q3: Create an array of objects of class 'Student' and display records.
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
    void display() { cout << name << " -> " << marks << endl; }
};

int main() {
    Student s[3] = {{"Alice", 90}, {"Bob", 85}, {"Carol", 92}};
    for (int i = 0; i < 3; i++) s[i].display();
    return 0;
}
