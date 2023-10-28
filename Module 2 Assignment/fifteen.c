#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0],i; 

    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max;
}

int main() {
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int maximum = findMax(array, size);

    printf("The maximum number in the array is: %d\n", maximum);

    return 0;
}

