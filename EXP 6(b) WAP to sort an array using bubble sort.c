#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
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
    printf("sorted array in ascending order");
    for (i=0;i<n;i++)
    {
        printf("\n %d",arr[i]);
    }
    return 0;
}