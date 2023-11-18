#include<stdio.h>
int main(){
  
    int arr[100], n, i, j, count = 0;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
      for(j = i + 1; j < n; j++){
        if(arr[i] == arr[j]){
          count++;
          break;
        }
      }
    }

    printf("Total number of duplicate elements found in the array is: %d\n", count);

    return 0;
  }