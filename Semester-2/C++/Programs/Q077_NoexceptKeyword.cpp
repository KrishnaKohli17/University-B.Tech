// Q77: Use noexcept specifier and std::terminate behavior.
#include <iostream>
using namespace std;
void safe_fn() noexcept {
    cout << "Safe function called\n";
}
bool is_noexcept = noexcept(safe_fn());
int main() {
    cout << "safe_fn is noexcept: " << boolalpha << is_noexcept << "\n";
    safe_fn();
    return 0;
}
