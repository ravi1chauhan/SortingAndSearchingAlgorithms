/*
Bnary Search in C
Binary Search Algorithm

--> Iteration Method
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (element > arr[mid]) // element is on the right side
        low = mid + 1
    else                       // element is on the left side
        high = mid - 1

--> Recursive Method
binarySearch(arr, element, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if element > arr[mid]        // element is on the right side
            return binarySearch(arr, element, mid + 1, high)
        else                               // element is on the right side
            return binarySearch(arr, element, low, mid - 1)
*/
#include <stdio.h>

// Iteration Method
int binarySearchI(int array[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// Recursive Method
int binarySearchR(int array[], int element, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == element)
            return mid;

        // Search the left half
        if (array[mid] > element)
            return binarySearchR(array, element, low, mid - 1);

        // Search the right half
        return binarySearchR(array, element, mid + 1, high);
    }
    return -1;
}

int main()
{
    // Sorted array for binary search
    int array[] = {1, 2, 3, 4, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int element = 2;

    // int searchIndex = binarySearchI(array, size, element);
    int searchIndex = binarySearchR(array, element, 0, size - 1);

    (searchIndex == -1) ? printf("Element not found") : 
    printf("The element %d was found at index %d \n", element, searchIndex);

    return 0;
}