/*
Linear Search in C
Linear Search Algorithm

LinearSearch(array, key)
  for each item in the array
    if item == value
      return its index
*/

#include <stdio.h>

int linearSearch(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // Unsorted array for linear search
    int array[] = {9, 3, 2, 4, 7, 1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int element = 2;

    int searchIndex = linearSearch(array, size, element);

    (searchIndex == -1) ? printf("Element not found") : 
    printf("The element %d was found at index %d \n", element, searchIndex);

    return 0;
}