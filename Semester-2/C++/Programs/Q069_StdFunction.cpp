// Q69: Use std::function to store callable objects.
#include <iostream>
#include <functional>
using namespace std;
int add(int a, int b) { return a + b; }
int main() {
    function<int(int,int)> f = add;
    cout << f(3, 4) << endl;
    f = [](int a, int b){ return a * b; };
    cout << f(3, 4) << endl;
    return 0;
}
