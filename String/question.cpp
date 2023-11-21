#include<iostream>
#include<string>
using namespace std;

int main(){

  string s;
  getline(cin,s);
  cout<<endl;
  cout<<"Your entered sting is: "<<s<<endl;

  cout<<"Reverse string is : ";

  int start=0;
  int end=s.size()-1;

  while(start<end){
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    start++,end--;
  }
  cout<<s<<endl;

  return 0;
}