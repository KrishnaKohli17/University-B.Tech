#include <iostream>
using namespace std;
int main()
{
    int n, original, reversed = 0, reminder;
    cout << "Enter an interger: ";
    cin >> n;
    original = n;
    while (n != 0)
    {
        reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n = n / 10;
    }
    if (original == reversed)
        cout << original << " is a Palindrome";
    else
        cout << original << " is not a Palindrome";
    return 0;
}
