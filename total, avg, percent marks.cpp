#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5;
	float total,avg,percentage;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	avg=total/5;
	percentage=(total/500)*100;
	printf("total marks=%f\n",total);
	printf("average marks=%f\n",avg);
	printf("percentage marks=%f\n",percentage);
}


