// Linear search in c++

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {9, 3, 2, 4, 7, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 4;

    int result = linearSearch(arr, n, element);

    (result == -1) ? cout << "Element not found" : 
    cout << "Element found at index: " << result;
    return 0;
}