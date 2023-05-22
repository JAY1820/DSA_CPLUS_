//insertion sort

#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) //i=1
    {
        key = arr[i]; //key=arr[1]=2
        j = i - 1;    //j=0
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; //arr[1]=arr[0]=1
            j = j - 1;           //j=-1
        }
        arr[j + 1] = key; //arr[0]=key=2
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) //i=0
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); //n=6
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
