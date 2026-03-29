#include <iostream>
using namespace std;
int main(){
  int n;
  unsigned long long factorial=1;
  cout<<"Enter a positive number: ";
  cin>>n;
  for (int i=1;i<=n;++i){
    factorial*=1;}
  cout<<"Facatorial of "<<n<<" = "<<factorial;
return 0;
}
