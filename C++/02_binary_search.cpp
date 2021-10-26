// Binary Search in C++

#include<iostream>
using namespace std;

// Iterative Method
int binarySearchI(int arr[], int element, int low, int high){
    while(low <= high){
        // int mid = low + (high - low)/2;
        int mid = (low + high)/2;

        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

// Recursive Method
int binarySearchR(int arr[], int element, int low, int high){
    while(high >= low){
        // int mid = low + (high - low)/2;
        int mid = (low + high)/2;

        if(arr[mid] == element){
            return mid;
        }
        // Search the left half
        if(arr[mid] > element){
            return binarySearchR(arr, element, low, mid -1);
        }
        // Search the right half
        else{
            return binarySearchR(arr, element, mid + 1, high);
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 7, 9}; // Array must be sorted in Binary search
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = -7;

    // int result = binarySearchI(arr, element, 0, n-1);
    int result = binarySearchR(arr, element, 0, n-1);

    if(result == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element is found at index: "<<result;
    }
    return 0;
}