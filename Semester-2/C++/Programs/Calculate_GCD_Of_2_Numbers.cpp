#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter 1st number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;

  while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "GCD = " << n1;
    return 0;
}
