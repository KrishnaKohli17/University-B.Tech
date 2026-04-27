// Q72: Handle multiple exception types.
#include <iostream>
#include <stdexcept>
using namespace std;
void process(int x) {
    if (x < 0) throw invalid_argument("Negative value");
    if (x == 0) throw domain_error("Zero not allowed");
    if (x > 100) throw out_of_range("Value too large");
    cout << "Processing: " << x << endl;
}
int main() {
    int vals[] = {-1, 0, 50, 200};
    for (int v : vals) {
        try { process(v); }
        catch (const invalid_argument& e) { cout << "InvalidArg: " << e.what() << "\n"; }
        catch (const domain_error& e) { cout << "DomainErr: " << e.what() << "\n"; }
        catch (const out_of_range& e) { cout << "OutOfRange: " << e.what() << "\n"; }
    }
    return 0;
}
