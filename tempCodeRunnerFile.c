#include <stdio.h>

int main() {
  int arr[100], size, pos, value, i;

  // Read the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Read the elements of the array
  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  // Read the position and value of the element to be inserted
  printf("Enter the position where you want to insert the element: ");
  scanf("%d", &pos);
  printf("Enter the value of the element: ");
  scanf("%d", &value);

  // Shift the elements of the array to the right from the given position
  for (i = size - 1; i >= pos; i--) {
    arr[i+1] = arr[i];
  }

  // Insert the element at the given position
  arr[pos] = value;

  // Increment the size of the array
  size++;

  // Print the updated array
  printf("The updated array is: ");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
