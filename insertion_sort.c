#include<stdio.h>
void insertSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i - 1;
    
    while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
    arr[j+1]=key;
    }
}

//Function to print array
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int arr[]={5,2,4,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Origianl Array\n");
    printArray(arr,n);
    insertSort(arr,n);

    printf("Sorted Array: \n");
    printArray(arr, n);
    return 0;
}