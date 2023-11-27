#include<iostream>
using namespace std;

int main(){
  // int a=10;
  // cout<<&a;

  // int *ptr=&a;
  // cout<<endl;

  // cout<<ptr;

  // int **ptr2=&ptr;
  // cout<<endl;

  // cout<<ptr2<<endl;
  // cout<<&ptr;

  int a=10;
  cout<<&a<<endl;

  int *ptr=&a;
  cout<<ptr<<endl;

  float m=2.5;
  float *ptr1=&m;
  cout<<ptr1<<endl;
  cout<<*ptr1<<endl;
  cout<<*ptr;

  int b=30;
  ptr=&b;
  cout<<ptr<<endl;

  char p='p';
  char *pt;
  pt=&p;

  cout<<pt<<endl;
  cout<<*pt;



  return 0;
}