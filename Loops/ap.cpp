#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter n ";
  cin>>n;
  // for(int i=1;i<=2*n-1;i+=2){
  //   cout<<i<<" ";
  // }

  // for(int i=4;i<=2*n-1;i+=3){
  //   cout<<i<<" ";
  // }

int a=4;
for(int i=1;i<=n;i++){
  cout<<a<<" ";
  a=a+3;
}

}