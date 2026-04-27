// Q68: Demonstrate function objects (functors) with STL.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class IsEven {
public:
    bool operator()(int x) const { return x % 2 == 0; }
};
int main() {
    vector<int> v = {1,2,3,4,5,6,7,8};
    int count = count_if(v.begin(), v.end(), IsEven());
    cout << "Even numbers: " << count << endl;
    return 0;
}
