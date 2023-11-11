#include<iostream>
using namespace std;
int main(){
  int week;
  cout<<"Enter number below 2: ";
  cin>>week;
  switch(week){
    case 1:{
      cout<<"Sunday";
      break;
    }
    case 2:{
      cout<<"Monday";
      break;
    }
    default: {
      cout<<"Choose another one";
    }
  }
}