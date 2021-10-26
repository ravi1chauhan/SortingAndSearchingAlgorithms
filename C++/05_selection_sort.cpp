// Selection Sort in C++

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

int main(){
    int A[] = {44, 78, 24, 72, 14, 11};
    int n = sizeof(A) / sizeof(A[0]);

    printArray(A, n);

    cout << "Sorted Array in Ascending Order: " << endl;
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}