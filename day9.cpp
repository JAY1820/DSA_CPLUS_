//linear search and binary search

#include <iostream>

using namespace std;

// Linear search function
int linearSearch(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

// Binary search function
int binarySearch(int arr[], int n, int x) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

// Driver code
int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 30;

  // Linear search
  int index = linearSearch(arr, n, x);

  if (index == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << index << endl;
  }

  // Binary search
  index = binarySearch(arr, n, x);

  if (index == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << index << endl;
  }

  return 0;
}