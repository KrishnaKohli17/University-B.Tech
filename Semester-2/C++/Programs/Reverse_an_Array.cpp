#include <iostream>
using namespace std;

class Reverse_Array{
    int arr[5];
    public:
    Reverse_Array(int a[5]){
        for (int i=0; i<5;i++)
        arr[i]=a[i];}

    void reverse(){
        for(int i=4;i>=0;i--){
            cout<<arr[i]<<" ";}}};
    
    int main(){
        int a[5]={1,2,3,4,5};
        Reverse_Array obj(a);
        obj.reverse();
    }
