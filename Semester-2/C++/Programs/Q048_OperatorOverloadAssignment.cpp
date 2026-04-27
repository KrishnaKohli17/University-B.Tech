// Q48: Overload assignment operator (deep copy).
#include <iostream>
#include <cstring>
using namespace std;
class Str {
    char* data;
public:
    Str(const char* s) { data = new char[strlen(s)+1]; strcpy(data,s); }
    Str& operator=(const Str& o) {
        if(this != &o) {
            delete[] data;
            data = new char[strlen(o.data)+1];
            strcpy(data, o.data);
        }
        return *this;
    }
    ~Str() { delete[] data; }
    void print() { cout << data << endl; }
};
int main() {
    Str s1("Hello"), s2("World");
    s2 = s1;
    s2.print();
    return 0;
}
