// Q67: Use lambda expressions with STL algorithms.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {1, 5, 3, 9, 2, 7, 4, 8, 6};
    int threshold = 5;
    auto it = remove_if(v.begin(), v.end(), [threshold](int x){ return x <= threshold; });
    v.erase(it, v.end());
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << endl;
    return 0;
}
