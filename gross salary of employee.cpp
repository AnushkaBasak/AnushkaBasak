#include<stdio.h>
main()
{
	int b,hra,da,gross_sal;
	printf("enter basic salary");
	scanf("%d",&b);
	if(b<=10000)
	{
		hra=0.20*b;
		da=0.80*b;
	}
	else if((b>10000)&&(b<=20000))
	{
		hra=0.25*b;
		da=0.90*b;
	}
	else if(b>20000)
	{
		hra=0.30*b;
		da=0.95*b;
	}
	gross_sal=b+hra+da;
	printf("Gross salary= %d",gross_sal);
}

