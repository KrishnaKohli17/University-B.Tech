#include <iostream>
using namespace std;
int main(){
  int n,original,remainder,result=0;
  cout<<"Enter a three digit number: ";
  cin>>n;
  original=n;

  while (original!=0){
    remainder=original%10;
    result+=remainder*remainder*remainder;
    original/=10;}
  if(result==n)
    cout<<n<<" is an Armstrong number";
  else
    cout<<n<<" is not an Armstrong number";
return 0;
}
