#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char s[20];
  int i;

  cout<<"Enter a string: ";
  gets(s);

  // for(i=0;s[i]!='\0';i++);
  // cout<<"Length of string is: "<<i;

  i=strlen(s);
  cout<<"Length is :"<<i;

  return 0;
}