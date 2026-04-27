// Q2: Demonstrate public, private, and protected access specifiers.
#include <iostream>
using namespace std;

class Demo {
private:
    int secret = 42;
protected:
    int semi = 10;
public:
    int visible = 99;
    int getSecret() { return secret; }
};

int main() {
    Demo d;
    cout << "Public: " << d.visible << endl;
    cout << "Private via getter: " << d.getSecret() << endl;
    return 0;
}
