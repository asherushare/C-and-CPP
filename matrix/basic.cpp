#include<iostream>
using namespace std;

int main(){
  int a[2][2];

  cout<<"Enter the elements of the matrix: ";
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++)
      cin>>a[i][j];
  }
  
  cout<<"The matrix is: \n";
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++)
      cout<<a[i][j]<<" ";
    cout<<endl;
  }

  int b[2][2];

  cout<<"Enter the second matrix: \n";
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      cin>>b[i][j];
    }
  }

  cout<<"The second matrix is: \n";
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }

  int sum[2][2];

  cout<<"The sum of the two matrices is: \n";
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
