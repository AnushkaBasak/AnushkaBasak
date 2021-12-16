#include<stdio.h>
main()
{
	float u,p,bill;
	printf("enter electricity units");
	scanf("%f",&u);
	if(u<=50)
	{
	
		p=0.50*u;
	printf("less than 50 %f",p);
	}
	else if((u>50)&&(u<=150))
	{
		p=(((u-50)*0.75)+(50*0.50));
	printf("next 100 %f",p);	
	}
	else if((u>150)&&(u<=250))
	{
		p=(((u-150)*1.20)+(100*0.75)+(50*0.50));
	}
	else if(u>250)
	{
		p=(((u-250)*1.50)+(100*1.20)+(100*0.75)+(50*0.50));
	}
	bill=p+(0.20*p);
	printf("Total bill of electricity= %f",bill);
}

	
	
	

