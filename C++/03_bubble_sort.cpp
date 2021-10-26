// Bubble Sort in C++

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on Pass Number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            // Change > to < to sort in descending order
            if (arr[j] > arr[j + 1])
            {

                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortOptimized(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        printf("Working on Pass Number %d\n", i + 1);
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // if no two elements were swapped by inner loop, then break
        if (swapped == false)
        {
            break;
        }
    }
}

// Recursive Bubble Sort
void bubbleSortRecursive(int arr[], int n){
    // Base case
    if (n == 1)
        return;

    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

    bubbleSort(arr, n-1);
}

int main()
{
    int arr[] = {9, 3, 2, 4, 7, 1, 2, 3};
    // find array's length
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    // bubbleSort(arr, n);
    // bubbleSortOptimized(arr, n);
    bubbleSortRecursive(arr, n);

    cout << "Sorted Array in Ascending Order: " << endl;
    printArray(arr, n);
    return 0;
}