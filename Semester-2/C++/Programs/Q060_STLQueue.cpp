// Q60: Implement BFS simulation using STL queue.
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    for (int i = 1; i <= 5; i++) q.push(i * 10);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
