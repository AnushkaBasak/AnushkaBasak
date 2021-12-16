#include<stdio.h>
main()
{
	int a,b,c,d,total;
	printf("enter number of Rs.10 notes\n");
	scanf("%d",&a);
	printf("enter number of Rs.20 notes\n");
	scanf("%d",&b);
	printf("enter number of Rs.50 notes\n");
	scanf("%d",&c);
	printf("enter number of Rs.100 notes\n");
	scanf("%d",&d);
	total=((a*10)+(b*20)+(c*50)+(d*100));
	printf("the total amount is%d",total);
}
	
	
	
