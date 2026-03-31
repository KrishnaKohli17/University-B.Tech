#include <iostream>
using namespace std;

class Average
{int arr[5];
public:
    Average(int a[5])
    {for (int i = 0; i < 5; i++)
      arr[i] = a[i];}

    void Avg()
    {int s = 0;
        for (int i = 0; i < 5; i++)
        {s += arr[i];}
        cout << "Average: " << (float)s / 5;}};

int main()
{int a[5] = {10, 20, 30, 40, 50};
    Average obj(a);
    obj.Avg();}
