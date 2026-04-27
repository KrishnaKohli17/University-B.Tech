// Q81: Use seekg/seekp for random file access.
#include <iostream>
#include <fstream>
using namespace std;
struct Rec { int id; char name[20]; };
int main() {
    Rec records[] = {{1,"Alice"},{2,"Bob"},{3,"Carol"}};
    fstream f("records.bin", ios::binary|ios::out|ios::in|ios::trunc);
    for (auto& r : records) f.write((char*)&r, sizeof(r));
    // Read record at index 1 (Bob)
    f.seekg(1 * sizeof(Rec));
    Rec r;
    f.read((char*)&r, sizeof(r));
    cout << "Record 1: " << r.id << " " << r.name << "\n";
    f.close();
    return 0;
}
