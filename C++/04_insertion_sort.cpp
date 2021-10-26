// Insertion Sort in C++

#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Recursive Insertion Sort
void insertionSortRecursive(int arr[], int n){
    // Base case
    if (n <= 1)
        return;
 
    // Sort first n-1 elements
    insertionSortRecursive(arr, n-1);
 
    // Insert last element at its correct position
    // in sorted array.
    int last = arr[n-1];
    int j = n-2;
 
    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}
 
int main(){
    int arr[] = {9, 3, 2, 4, 7, 1, 2, 3};
    // find array's length
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    insertionSort(arr, n);
    // insertionSortRecursive(arr, n);

    cout << "Sorted Array in Ascending Order: " << endl;
    printArray(arr, n);
    return 0;
}