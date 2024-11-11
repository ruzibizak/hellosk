#include <stdio.h>

int location_of_largest(int arr[], int size) {
    if (size == 0) {
        return -1; // If the array is empty, return -1 (or any other appropriate error value).
    }

    int maxIndex = 0; // Start by assuming the first element is the largest.

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i; // Update maxIndex when a larger value is found.
        }
    }

    return maxIndex;
}

int main() {
    int size;
    
    // Prompt user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    // Ensure the user enters a valid size
    if (size <= 0) {
        printf("The size of the array must be a positive integer.\n");
        return 1; // Exit with an error code
    }

    int arr[size]; // Declare the array with the user-defined size

    // Prompt user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each element into the array
    }
    
    // Call the function to find the index of the largest value
    int result = location_of_largest(arr, size);
    
    // Print the result
    printf("The index of the largest value is: %d\n", result);

    return 0;
}
