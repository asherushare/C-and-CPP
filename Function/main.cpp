#include<iostream>
using namespace std;

int sum(int a,int b){
  int add=a+b;
  return add;
}

void funct(){
  cout<<"This is called function.";
}

int main(){
  int x,z;
  cout<<"Enter two numbers: ";
  cin>>x>>z;
  cout<<"The sum is "<<sum(x,z)<<endl;
  funct();
  return 0;
}