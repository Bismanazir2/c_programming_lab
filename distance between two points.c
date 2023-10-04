#include<stdio.h>
#include<math.h>
void main()
{
    float d,x1,x2,y1,y2;
    printf("enter the values of x1,x2,/n");
    scanf("%f%f",&x1,&x2);
    printf("enter the values of y1,y2,/n");
    scanf("%f%f",&y1,&y2);
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("the distance between the points is %2f",d);
}