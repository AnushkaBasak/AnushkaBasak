#include<stdio.h>
int main()
{
int n,s;
s=0;
printf("enter a number");
scanf("%d",&n);
for (int i=1;i<=(n-1);i++)
{
if(n%i==0)
s=s+i;
}
if(s==n)
printf("It is a perfect number");
else
printf("Not a perfect number");
}




