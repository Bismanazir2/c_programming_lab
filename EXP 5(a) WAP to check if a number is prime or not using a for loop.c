#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
        if(n==1)
        {
            printf("1 is neither composite nor prime");
        }
            
            else if(c==0)
            {
                printf("%d is a prime number" ,n);
            }
                else
                    printf("%d is a composite no." ,n);
                    return 0;
}
                
            
        
    

