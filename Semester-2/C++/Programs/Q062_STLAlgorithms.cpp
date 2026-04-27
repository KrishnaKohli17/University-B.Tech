// Q62: Apply STL algorithms: sort, find, count, transform.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {5, 2, 8, 1, 9, 3};
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " "; cout << "\n";
    auto it = find(v.begin(), v.end(), 8);
    cout << "Found 8 at index: " << distance(v.begin(), it) << "\n";
    transform(v.begin(), v.end(), v.begin(), [](int x){ return x*2; });
    for (int x : v) cout << x << " "; cout << "\n";
    return 0;
}
