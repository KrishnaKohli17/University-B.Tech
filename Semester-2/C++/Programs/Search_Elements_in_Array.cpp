#include <iostream>
using namespace std;

class Search{
  int arr[5],key;
public:
    Search(int a[5] , int K){
        key=K;
        for(int i=0;i<5;i++){
            arr[i]=a[i];}}
    
    void find(){
        for(int i=0;i<5;i++){
            if(arr[i]==key){
                cout<<"Found at Position"<<i;
                return;}
                cout<<"Not Found";
            }
        }
};

int main(){
  int a[5]={1,4,6,8,10};
  Search obj(4,6);
  obj.find()}
