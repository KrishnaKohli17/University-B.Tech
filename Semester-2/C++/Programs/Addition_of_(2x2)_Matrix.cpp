#include <iostream>
using namespace std;

class MatrixAdd
{
    int a[2][2],b[2][2];
public:
    MatrixAdd(int x[2][2],int y[2][2]){
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                a[i][j]=x[i][j];
                b[i][j]=y[i][j];}}}

    void add()
    {
        cout<<"Result: \n";
        for (int i=0; i<=2; i++){
            for (int j=0; j<=2; j++){
                cout<<a[i][j]+b[i][j]<<" ";}
                cout<<endl;}}
};

int main()
{
    int x[2][2] = {{1, 2},{3,4}};
    int y[2][2] = {{5,6},{7,8}};
    MatrixAdd obj(x,y);
    obj.add();
}
