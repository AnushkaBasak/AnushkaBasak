#include<stdio.h>
main()
{
	for (char ch=65;ch<=69;ch++)
	{
	for(char ch1=65;ch1<=ch;ch1++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
	}
}

