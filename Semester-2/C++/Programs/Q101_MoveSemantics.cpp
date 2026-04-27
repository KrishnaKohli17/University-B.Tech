// Q101: Move constructor and move assignment operator.
#include <iostream>
#include <cstring>
using namespace std;
class Buffer {
    char* data; size_t size;
public:
    Buffer(size_t n) : size(n), data(new char[n]) { cout << "Constructed\n"; }
    Buffer(Buffer&& o) noexcept : data(o.data), size(o.size) { o.data=nullptr; o.size=0; cout<<"Moved\n"; }
    Buffer& operator=(Buffer&& o) noexcept {
        if(this!=&o){ delete[] data; data=o.data; size=o.size; o.data=nullptr; o.size=0; }
        return *this;
    }
    ~Buffer() { delete[] data; }
    size_t getSize() { return size; }
};
int main() {
    Buffer b1(100);
    Buffer b2 = move(b1);
    cout << "b2 size: " << b2.getSize() << "\n";
    cout << "b1 size: " << b1.getSize() << "\n";
    return 0;
}
