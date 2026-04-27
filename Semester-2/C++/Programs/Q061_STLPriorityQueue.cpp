// Q61: Use priority_queue for max-heap and min-heap.
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    priority_queue<int> maxH;
    priority_queue<int, vector<int>, greater<int>> minH;
    int arr[] = {3,1,4,1,5,9,2,6};
    for (int x : arr) { maxH.push(x); minH.push(x); }
    cout << "Max: " << maxH.top() << ", Min: " << minH.top() << endl;
    return 0;
}
