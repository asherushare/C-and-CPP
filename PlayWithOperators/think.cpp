#include<iostream>
using namespace std;
int main(){
  int n;
  int r;
  int count=0;
  cout<<"Input a number: ";
  cin>>n;

  //counting number of digits

  while(n>0){
    
    n=n/10;
    count++;
  }
  cout<<"cout is "<<count;
}