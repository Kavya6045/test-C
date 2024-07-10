#include <stdio.h>

// Function to calculate the square of each element in the array
void squareElements(int *arr, int size,int i) {
    for (i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));  // Square the element
    }
}

int main() {
    int n,i;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the number of elements is positive
    if (n <= 0) {
        printf("Array size should be a positive integer.\n");
        return 1;  // Exit the program with an error code
    }

    // Declare the array
    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function to square the elements
    squareElements(arr, n,i);

    // Print the squared elements
    printf("Squared elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


