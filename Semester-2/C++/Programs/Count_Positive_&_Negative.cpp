#include <iostream>
using namespace std;

class CountPN{
  int arr[5];
public:
    CountPN(int a[5]){
        for (int i=0;i<5;i++){
            arr[i]=a[i];}}
    void Count(){
        int p=0,n=0;
        for (int i=0;i<5;i++){
            arr[i]>=0?p++:n++;
            cout<<"Positive ="<<p<<"Negative ="<<n;}}};
int main(){
    int a[5]={-2,3,-1,5,6};
    CountPN obj(a);
    obj.Count();}
