#include<stdio.h>
int linSer(int arr[], int size, int target)
{
    for(int i=0; i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,25,30,45,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 30;
    int result = linSer(arr,size,target);
    if(result!= -1)
    {
        printf("Element %d found at %d position",target,result+1);
    }
    else
    {
        printf("Element not found in the array");
    }
    return 0;
}