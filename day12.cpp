//merge sort
#include <iostream>
using namespace std;


void merge_sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,ub,mid);
    }
}

int merge(int arr[],int lb,int ub,int mid)
{
   int b[100];
   int i=lb;
   int j=mid+1;
   int k=lb; //fill in b

   while(i<=mid && j<=ub)
   {
       //left part chota hai to b[k] me arr[i] dal do
       if(arr[i]<arr[j]) 
       {
            b[k]=arr[i]; i++;
       }   else
       {
           b[k]=arr[j]; j++; 
       }
       k++;
   }
   //left part me kuch bacha hai to b me dal do
   if(i>mid)
   {
       while (j<=ub)
       {
           b[k]=arr[j]; j++; k++;
       }
       
   }
   //right part me kuch bacha hai to b me dal do
   else
   {
       while(i<=mid)
       {
           b[k]=arr[i]; i++; k++;
       }
   }
   //copy b to arr
    for(k=lb;k<=ub;k++)
    {
         arr[k]=b[k];
    }

}


void merge_sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,ub,mid);
    }
}

int merge(int arr[],int lb,int ub,int mid)
{
   int b[100];
   int i=lb;
   int j=mid+1;
   int k=lb; //fill in b

   while(i<=mid && j<=ub)
   {
       //left part chota hai to b[k] me arr[i] dal do
       if(arr[i]<arr[j]) 
       {
            b[k]=arr[i]; i++;
       }   else
       {
           b[k]=arr[j]; j++; 
       }
       k++;
   }
   //left part me kuch bacha hai to b me dal do
   if(i>mid)
   {
       while (j<=ub)
       {
           b[k]=arr[j]; j++; k++;
       }
       
   }
   //right part me kuch bacha hai to b me dal do
   else
   {
       while(i<=mid)
       {
           b[k]=arr[i]; i++; k++;
       }
   }
   //copy b to arr
    for(k=lb;k<=ub;k++)
    {
         arr[k]=b[k];
    }

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    printArray(arr, n);
    return 0;
}