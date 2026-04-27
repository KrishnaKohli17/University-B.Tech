// Q47: Overload [] subscript operator.
#include <iostream>
using namespace std;
class SafeArray {
    int arr[10];
public:
    SafeArray() { for(int i=0;i<10;i++) arr[i]=i*10; }
    int& operator[](int idx) {
        if(idx<0||idx>=10) { cout<<"Index out of range!\n"; exit(1); }
        return arr[idx];
    }
};
int main() {
    SafeArray sa;
    cout << sa[3] << endl;
    sa[3] = 99;
    cout << sa[3] << endl;
    return 0;
}
