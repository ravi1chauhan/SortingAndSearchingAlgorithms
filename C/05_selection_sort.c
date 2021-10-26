
/*
Selection sort in C

Selection Sort Algorithm
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
*/
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    printf("Running the selection sort...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        // temp = A[i];
        // A[i] = A[indexOfMin];
        // A[indexOfMin] = temp;
        swap(&A[i], &A[indexOfMin]);
    }
}
int main()
{

    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

    // int A[] = {3, 5, 2, 13, 12};
    // int n = 5;
    int A[] = {44, 78, 24, 72, 14, 11};
    int n = sizeof(A) / sizeof(A[0]);

    printArray(A, n);

    printf("Sorted Array in Ascending Order:\n");
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}