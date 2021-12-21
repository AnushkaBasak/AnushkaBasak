#include<stdio.h>
main()
{
int n,sum=0;
printf("enter a number");
scanf("%d",&n);
for(;n>0;n=n/10)
{
	sum=sum+(n%10);
}
printf("%d",sum);
}


