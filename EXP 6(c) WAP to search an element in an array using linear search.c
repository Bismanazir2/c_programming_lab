#include<stdio.h>
void main()
{
int arr[]={2,4,1,7,5,9,3,6,8,10};
int elementsearch,found=0,i;
printf("enter the element to search");
scanf("%d",&elementsearch);
for(i=0;i<10;i++)
{
    if(arr[i]== elementsearch)
    {
        printf("number found at the index:%d",i);
        found=1;
        break;
    }
}
if(!found)
{
    printf("element not found in the array:%d",elementsearch);
}
}