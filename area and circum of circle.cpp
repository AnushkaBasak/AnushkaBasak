#include<stdio.h>
main()
{
	int r,area,circum;
	printf("enter radius of circle");
	scanf("%d",&r);
	area=3.14*r*r;
	circum=2*3.14*r;
	printf("area of circle=%d\n",area);
	printf("circumference of circle=%d\n",circum);
}
