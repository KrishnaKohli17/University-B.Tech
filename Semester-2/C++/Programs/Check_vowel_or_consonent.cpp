#include <iostream>
using namespace std;
int main()
{
    char c;
    bool isLowerCaseVowel, isUpperCaseVowel;
    cout << "Enter an Alphabet: ";
    cin >> c;
    isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowerCaseVowel || isUpperCaseVowel)
        cout << c << " is a Vowel";
    else
        cout << c << " is a Consonent";
    return 0;
}
