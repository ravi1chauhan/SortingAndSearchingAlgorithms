// Quick sort in C++

#include<iostream>
using namespace std;

void swap(int *a, int *b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // swap A[low] and A[j]
    // swap(&A[low], &A[j]);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high)
{

    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // sort left subArray
        quickSort(A, partitionIndex + 1, high); // sort right subArray
    }
}

int main(){
    int A[] = {44, 78, 24, 72, 14, 11, 1};
    int n = sizeof(A) / sizeof(A[0]);

    printArray(A, n);
    cout << "Sorted Array in Ascending Order: " << endl;
    quickSort(A, 0, n - 1);
    printArray(A, n);
    
    return 0;
}