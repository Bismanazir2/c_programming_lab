#include<stdio.h>
void main()
{
	int ch, c;
	float l, b, r, s, a, p;
	printf("MENU\n\t1.Area \n\t2. Perimeter");
	printf("\nEnter your choice from 1 to 2");
	scanf("%d", &ch);
	if (ch == 1)
	{
		printf("MENU\n\t1.Square \n\t2.Rectangle\n\t3.Circle\nEnter your choice from 1 to 3");
		scanf("%d", &c);
		if (c == 1)
		{
			printf("Enter side of square");
			scanf("%f", &s);
			a = s * s;
			printf("Area is %.2f", a);
		}
		else if (c == 2)
		{
			printf("Enter length and breadth");
			scanf("%f%f", &l, &b);
			a = l* b;
			printf("Area is %.2f", a);
		}
		else if (c == 3)
		{
			printf("Enter radius of circle");
			scanf("%f", &r);
			a = 3.14 * r * r;
			printf("Area is %f", a);
		}
		else

		{

			printf("try again");
		}
	}
	else if (ch == 2)
	{
		printf("MENU\n\t1.Square\n\t2.Rectangle\n\t3.Circle\nEnter your choice from 1 to 3");
		scanf("%d", &c);
		if (c == 1)
		{
			printf("Enter side of square");
			scanf("%f", &s);
			p = 4 * s;
			printf("Perimeter is %.2f", p);
		}
		else if (c==2)
		{
			printf("Enter length and breadth");
			scanf("%f%f", &l, &b);
			p = 2 * (1 + b);
			printf("Perimeter is %f", p);
		}
		else if (c==3)
		{
			printf("Enter radius of circle");
			scanf("%f", &r);
			p = 2 * 3.14 * r;
			printf("Perimeter is %f", p);
		}
		else
		{
			printf("try again");
		}

	}
	else
	{
		printf("try again");

	}
}
