//selection sort
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) //i=0
    {
        min_idx = i; //min_idx=0
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx]) //arr[1]<arr[0]
                min_idx = j;           //min_idx=1

        swap(arr[min_idx], arr[i]); //swap(arr[1],arr[0])
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) //i=0
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); //n=6
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}