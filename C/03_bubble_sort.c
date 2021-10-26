/*
Bubble sort in C

Bubble Sort Algorithm
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
*/

#include <stdio.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int *array, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        printf("Working on Pass Number %d\n", i + 1);
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

/*
Algorithm for Adaptive bubble sort is

bubbleSort(array)
  isSorted <- false
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
      isSorted <- true
end bubbleSort
*/
void bubbleSortAdaptive(int *array, int size)
// Adaptive means the array is already sorted
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        printf("Working on Pass Number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int data[] = {20, 50, 10, 40, 70, 90, 80, 30, 60, 100};
    int size = sizeof(data) / sizeof(data[0]);

    printArray(data, size); // Printing the array before sorting

    printf("Sorted Array in Ascending Order:\n");
    // bubbleSort(data, size); // Function to sort the array
    bubbleSortAdaptive(data, size); // Function to sort the array

    printArray(data, size); // Printing the array after sorting

    return 0;
}