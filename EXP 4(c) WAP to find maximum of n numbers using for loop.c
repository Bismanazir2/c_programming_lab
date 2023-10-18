#include<stdio.h>
void main()
{
    int n, i;
    double num, max = -9999999.0;
    printf("Enter the number of elements");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d number", i);
        scanf("%lf", &num);
        if (num > max)
        {
            max = num;
        }
        
    }
    printf("Max number is %.2lf", max);
}