#include<stdio.h>
#include<math.h>
void main()
{
    int num1,num,sum=0,r,l=0;
    printf("enter the number");
    scanf("%d" ,&num);
    num1=num;
    while(num)
    {
        l++;
        num/=10;
    }
    num=num1;
    while(num)
    {
        r=num%10;
        sum=sum+pow(r,l);
        num=num/10;
    }
 if(num1==sum)
{
printf("the given number is a armstrong");
}
else
printf("the given number is not a armstrong");
}