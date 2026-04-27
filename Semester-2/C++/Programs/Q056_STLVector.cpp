// Q56: Use STL vector with a custom class.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
public:
    string name; int grade;
    Student(string n, int g) : name(n), grade(g) {}
    bool operator<(const Student& o) const { return grade < o.grade; }
    void display() const { cout << name << ": " << grade << endl; }
};
int main() {
    vector<Student> students = {{"Alice",85},{"Bob",92},{"Carol",78}};
    sort(students.begin(), students.end());
    for (auto& s : students) s.display();
    return 0;
}
