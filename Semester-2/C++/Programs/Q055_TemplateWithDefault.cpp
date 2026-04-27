// Q55: Template with default type parameter.
#include <iostream>
using namespace std;
template <typename T = int, int Size = 5>
class Array {
    T data[Size];
public:
    void set(int i, T v) { data[i] = v; }
    T get(int i) { return data[i]; }
    int size() { return Size; }
};
int main() {
    Array<> ai;
    for (int i = 0; i < ai.size(); i++) ai.set(i, i*2);
    for (int i = 0; i < ai.size(); i++) cout << ai.get(i) << " ";
    cout << endl;
    return 0;
}
