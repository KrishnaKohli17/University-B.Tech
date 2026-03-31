#include <iostream>
using namespace std;
class SumArray
{int arr[5];

public:
    SumArray(int a[5])
    {for (int i = 0; i < 5; i++)
            arr[i] = a[i];}

    void Sum()
    {int s = 0;
        for (int i = 0; i < 5; i++)
        {s += arr[i];}
        cout << "Total Sum: " << s << endl;}};

int main()
{int m[5] = {1, 2, 3, 4, 5};
    SumArray obj(m);
    obj.Sum();}
