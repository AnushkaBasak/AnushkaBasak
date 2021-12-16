#include<stdio.h>
main()
{
	float amt,a,b,c;
	printf("enter an amount in rupees");
	scanf("%f",&amt);
	a=amt/1.0;
	b=amt/2.0;
	c=amt/0.5;
	printf("number of 1 rupee coins=&f\n",a);
	printf("number of 2 rupee coins=&f\n",b);
	printf("number of 50 paise coins=&f\n",c);
}
