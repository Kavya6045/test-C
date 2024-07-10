#include <stdio.h>
#include<conio.h>
void main() {
    int n, i;
    int largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size should be a positive integer.\n");
        return 1; 
    }
 
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 1; i < n; i++)
	{
        if (arr[i] > largest)
		{
            largest = arr[i];
        }
    }
    printf("The largest element in the array is %d.\n", largest);

    getch();
}

