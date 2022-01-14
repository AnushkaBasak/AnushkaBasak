#include<stdio.h>
int find_square(int n);
int main()
{
	int n,num_square;
	printf("enter a number");
	scanf("%d",&n);
	num_square=find_square(n);
	printf("Square of the number=%d",num_square);
	return 0;
}
int find_square(int n)
{
	int num_square;
	num_square=n*n;
	return num_square;
}
