// Q52: Class template – generic Stack implementation.
#include <iostream>
using namespace std;
template <typename T>
class Stack {
    T data[100]; int top = -1;
public:
    void push(T val) { data[++top] = val; }
    T pop() { return data[top--]; }
    bool isEmpty() { return top == -1; }
    T peek() { return data[top]; }
};
int main() {
    Stack<int> s;
    s.push(10); s.push(20); s.push(30);
    while (!s.isEmpty()) cout << s.pop() << " ";
    cout << endl;
    return 0;
}
