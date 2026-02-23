#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n"arr[i]);
    }
    printf("\n");
}
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        while(i>0&&arr[i]<arr[i-1])
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            i--;
        }
    }
}