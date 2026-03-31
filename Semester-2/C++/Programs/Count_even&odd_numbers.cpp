#include <iostream>
using namespace std;
class EvenOdd
{int arr[6];
public:
    EvenOdd(int a[6])
    {for (int i = 0; i < 6; i++)
    arr[i] = a[i];}

    void count()
    {int even = 0, odd = 0;
        for (int i = 0; i <= 6; i++)
        {if (arr[i] % 2 == 0)
            {even++;}
            else{odd++;}}
        cout << "Even: " << even << endl;
        cout << "Odd: " << odd << endl;}};

int main()
{   int a[6] = {1, 2, 3, 4, 5, 6};
    EvenOdd obj(a);
    obj.count();}
