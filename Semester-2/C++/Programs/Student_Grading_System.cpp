#include <iostream>
using namespace std;
int main()
{
    float m1, m2, m3;
    cout << "Enter marks for 3 subjects" << endl;
    cout << "Enter marks for 1st subject: ";
    cin >> m1;
    cout << endl;
    cout << "Enter marks for 2nd subject: ";
    cin >> m2;
    cout << endl;
    cout << "Enter marks for 3rd subject: ";
    cin >> m3;
    cout << endl;
    int avg = (m1 + m2 + m3) / 3.0;
    cout << "Average: " << avg << endl;
    if (avg >= 90)
    {cout << "Grade A";}
    else if (avg >= 80)
    {cout << "Grade B";}
    else if (avg >= 70)
    {cout << "Grade C";}
    else if (avg >= 60)
    {cout << "Grade D";}
    else if (avg >= 50)
    {cout << "Grade E";}
    else{cout << "Grade F";}
    return 0;
}
