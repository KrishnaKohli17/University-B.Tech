// Q108: Implement a full Stack ADT using OOP.
#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>
class Stack {
    T* data; int topIdx, capacity;
public:
    Stack(int cap=10) : capacity(cap), topIdx(-1) { data = new T[cap]; }
    ~Stack() { delete[] data; }
    void push(T val) {
        if(topIdx==capacity-1) throw overflow_error("Stack full");
        data[++topIdx] = val;
    }
    T pop() {
        if(isEmpty()) throw underflow_error("Stack empty");
        return data[topIdx--];
    }
    T top() const { return data[topIdx]; }
    bool isEmpty() const { return topIdx == -1; }
    int size() const { return topIdx + 1; }
};
int main() {
    Stack<int> s(5);
    s.push(1); s.push(2); s.push(3);
    cout << "Top: " << s.top() << "\n";
    while (!s.isEmpty()) cout << s.pop() << " ";
    cout << "\n";
    return 0;
}
