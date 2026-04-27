// Q80: Binary file I/O for storing objects.
#include <iostream>
#include <fstream>
using namespace std;
struct Student { char name[20]; int roll; float marks; };
int main() {
    Student s1 = {"Alice", 101, 95.5f};
    ofstream out("student.bin", ios::binary);
    out.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    out.close();
    Student s2;
    ifstream in("student.bin", ios::binary);
    in.read(reinterpret_cast<char*>(&s2), sizeof(s2));
    in.close();
    cout << s2.name << " " << s2.roll << " " << s2.marks << "\n";
    return 0;
}
