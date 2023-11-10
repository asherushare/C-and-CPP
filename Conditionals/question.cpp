#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  if(n>99 && n<1000)
  cout<<"This is a three digit number.";
  else
  cout<<"Not a three digit number.";
}