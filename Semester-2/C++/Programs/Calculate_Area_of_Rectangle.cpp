#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area;
    cout << "Enter Length of the Rectangle: ";
    cin >> length;
    cout << "Enter Breadth of the Rectangle: ";
    cin >> breadth;
    area = breadth * length;
    cout << "Area of Rectangle: " << area;
    return 0;
}
