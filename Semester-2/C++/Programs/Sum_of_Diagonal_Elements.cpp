#include <iostream>
using namespace std;

class DiagonalSum
{int mat[3][3];
public:
    DiagonalSum(int m[3][3])
    {for (int i = 0; i < 3; i++)
        {for (int j = 0; j < 3; j++)
            {mat[i][j] = m[i][j];}}}

    void Calculate()
    {int sum = 0;
        for (int i = 0; i < 3; i++)
        {sum += mat[i][i];
            cout << "Diagonal Sum: " << sum;}}};

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    DiagonalSum obj(m);
    obj.Calculate();
}
