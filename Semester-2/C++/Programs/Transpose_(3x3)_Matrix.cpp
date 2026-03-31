#include <iostream>
using namespace std;

class Transpose
{
    int mat[3][3];
public:
    Transpose(int m[3][3]){
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                mat[i][j]=m[i][j];}}}

    void showTranspose()
    {
        cout<<"Transpose: \n";
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                cout<<mat[j][i]<<" ";}
                cout<<endl;}}
};

int main()
{
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Transpose obj(m);
    obj.showTranspose();
}
