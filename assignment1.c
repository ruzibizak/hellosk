#include <stdio.h>

int main() {
  int choice, n, i, max, sum = 0;
  float avg;
  int arr[100]; // Assuming a maximum of 100 elements in the array

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("\nArray operations:\n");
  printf("1. Find the Maximum Element\n");
  printf("2. Find the Sum of all Elements\n");
  printf("3. Reverse the Array Elements\n");
  printf("4. Find the Average of Array Elements\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1: // Find the Maximum Element
      max = arr[0];
      for (i = 1; i < n; i++) {
        if (arr[i] > max) {
          max = arr[i];
        }
      }
      printf("The maximum element in the array is: %d\n", max);
      break;

    case 2: // Find the Sum of all Elements
      for (i = 0; i < n; i++) {
        sum += arr[i];
      }
      printf("The sum of all elements in the array is: %d\n", sum);
      break;

    case 3: // Reverse the Array Elements
      printf("The reversed array is:\n");
      for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
      }
      printf("\n");
      break;

    case 4: // Find the Average of Array Elements
      for (i = 0; i < n; i++) {
        sum += arr[i];
      }
      avg = (float)sum / n;
      printf("The average of all elements in the array is: %.2f\n", avg);
      break;

    default:
      printf("Invalid choice!\n");
  }

  return 0;
}