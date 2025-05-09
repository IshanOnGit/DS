#include<stdio.h>
int binSearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
            low = mid + 1;
        else
            high = mid - 1;
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 40;
    int result = binSearch(arr,size,target);
    if(result!=-1)
    {
        printf("Element %d found at index %d\n", target, result+1);
    }
    else
    {
        printf("Element %d not found", target);
    }
    return 0;
}