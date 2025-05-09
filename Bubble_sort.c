#include<stdio.h>
void BubbleSort(int arr[], int n)
{
   int i, j, temp;
   for(i=0;i<n-1;i++)//Controls the number of passes the algo makes through the array.
   {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            { 
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
}
void printArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[]= {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:\n");
    printArr(arr,n);
    BubbleSort(arr,n);
    printf("Sorted Array:\n");
    printArr(arr,n);
    return 0;
}