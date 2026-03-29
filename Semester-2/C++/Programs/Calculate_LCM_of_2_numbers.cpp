#include <iostream>
using namespace std;
int main() {
    int n1, n2, max;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    max = (n1 > n2) ? n1 : n2;
    while (true) {
        if (max % n1 == 0 && max % n2 == 0) {
            cout << "LCM : " << max << endl;
            break;
        }
        max++; 
    }
    return 0;
}
