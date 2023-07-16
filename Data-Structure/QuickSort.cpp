#include <iostream>
using namespace std;

// Function to swap two elements of the array
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Function to find the median of the first, middle and last elements of the array
int findMedian(int arr[], int a, int b, int c)
{
    int median;
    if (arr[a] < arr[b])
    {
        if (arr[b] < arr[c])
            median = b;
        else if (arr[a] < arr[c])
            median = c;
        else
            median = a;
    }
    else
    {
        if (arr[c] < arr[b])
            median = b;
        else if (arr[c] < arr[a])
            median = c;
        else
            median = a;
    }
    return median;
}


// Function to partition the array
int partition(int arr[], int low, int high)
{   
    int medianIndex = findMedian(arr, low, (low+high)/2, high);
    int pivot = arr[medianIndex];
    int i = (low - 1);
    
    swap(&arr[medianIndex], &arr[high]);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to implement quicksort
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver function
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 2, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Unsorted array:" << endl;
    printArray(arr, n);
    
    quicksort(arr, 0, n - 1);
    
    cout << "Sorted array: " << endl;
    printArray(arr,n);
}