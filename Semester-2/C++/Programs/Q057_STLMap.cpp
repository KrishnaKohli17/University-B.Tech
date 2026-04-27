// Q57: Use STL map to store and retrieve student records.
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string, int> grades;
    grades["Alice"] = 90;
    grades["Bob"] = 85;
    grades["Carol"] = 92;
    for (auto& [name, grade] : grades)
        cout << name << ": " << grade << endl;
    cout << "Alice's grade: " << grades["Alice"] << endl;
    return 0;
}
