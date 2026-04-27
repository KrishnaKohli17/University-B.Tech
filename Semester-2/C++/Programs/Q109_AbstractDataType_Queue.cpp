// Q109: Implement a full Queue ADT using OOP.
#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>
class Queue {
    T* data; int front, rear, capacity, count;
public:
    Queue(int cap=10) : capacity(cap), front(0), rear(-1), count(0) { data = new T[cap]; }
    ~Queue() { delete[] data; }
    void enqueue(T val) {
        if(isFull()) throw overflow_error("Queue full");
        rear = (rear+1) % capacity;
        data[rear] = val; count++;
    }
    T dequeue() {
        if(isEmpty()) throw underflow_error("Queue empty");
        T val = data[front];
        front = (front+1) % capacity; count--;
        return val;
    }
    bool isEmpty() const { return count == 0; }
    bool isFull() const { return count == capacity; }
    int size() const { return count; }
};
int main() {
    Queue<string> q(5);
    q.enqueue("Alice"); q.enqueue("Bob"); q.enqueue("Carol");
    while (!q.isEmpty()) cout << q.dequeue() << " ";
    cout << "\n";
    return 0;
}
