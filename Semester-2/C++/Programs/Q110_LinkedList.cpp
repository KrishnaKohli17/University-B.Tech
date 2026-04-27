// Q110: Singly linked list using OOP.
#include <iostream>
using namespace std;
template<typename T>
class LinkedList {
    struct Node { T data; Node* next; Node(T d) : data(d), next(nullptr) {} };
    Node* head = nullptr;
public:
    void push_front(T val) { Node* n = new Node(val); n->next = head; head = n; }
    void push_back(T val) {
        Node* n = new Node(val);
        if(!head) { head = n; return; }
        Node* cur = head;
        while(cur->next) cur = cur->next;
        cur->next = n;
    }
    void display() {
        for(Node* c=head; c; c=c->next) cout << c->data << " -> ";
        cout << "NULL\n";
    }
    ~LinkedList() { while(head) { Node* t=head; head=head->next; delete t; } }
};
int main() {
    LinkedList<int> l;
    l.push_back(1); l.push_back(2); l.push_back(3); l.push_front(0);
    l.display();
    return 0;
}
